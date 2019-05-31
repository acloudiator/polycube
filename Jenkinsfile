pipeline {
  agent any
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        ws(dir: 'build-pcn-iptables') {
          sh '''#!/bin/bash
cd ~
git clone https://github.com/polycube-network/polycube.git
cd ~/polycube/'''
        }

      }
    }
  }
  post {
    always {
      sh 'rm -rf ${WORKSPACE}/*'

    }

  }
}