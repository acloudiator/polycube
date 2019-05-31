pipeline {
  agent any
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        echo 'Allocating workspace'
        ws(dir: 'build-pcn-iptables') {
          dir(path: '~') {
            sh 'rm -rf ~/polycube'
          }

          git 'https://github.com/polycube-network/polycube.git'
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