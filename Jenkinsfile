pipeline {
  agent any
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        echo 'Allocating workspace'
        ws(dir: 'build-pcn-iptables') {
          echo 'change directory to home'
          dir(path: '~') {
            sh 'rm -rf ~/polycube'
          }

          echo 'git clone polycube repo'
          git 'https://github.com/polycube-network/polycube.git'
          echo 'execution of build'
          sh '''cd polycube
'''
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