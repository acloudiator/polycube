pipeline {
  agent {
    docker {
      image 'ubuntu:18.04'
    }

  }
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        sh '''#!/bin/bash
echo "Hello!"'''
      }
    }
  }
  post {
    always {
      sh 'rm -rf ${WORKSPACE}/*'

    }

  }
}