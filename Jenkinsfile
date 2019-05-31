pipeline {
  agent {
    label 'vagrant'
  }
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        sh 'cd ${POLYCUBE_WORKSPACE} && ./start.sh ${WORKSPACE}'
        ws(dir: 'pcn-iptables') {
          sh '''#!/bin/bash
echo "Hello World!"'''
        }

        cleanWs(cleanWhenAborted: true, cleanWhenFailure: true, cleanWhenNotBuilt: true, cleanWhenSuccess: true, cleanWhenUnstable: true, cleanupMatrixParent: true, deleteDirs: true, disableDeferredWipeout: true)
      }
    }
  }
  post {
    always {
      sh 'rm -rf ${WORKSPACE}/*'

    }

  }
}