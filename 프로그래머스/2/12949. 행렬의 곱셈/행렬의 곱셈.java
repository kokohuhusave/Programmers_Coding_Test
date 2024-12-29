class Solution {
    public int[][] solution(int[][] arr1, int[][] arr2) {
        // arr1, arr2의 열과 행의 수
        int row1 = arr1.length;
        int col1 = arr1[0].length;
        int row2 = arr2.length;
        int col2 = arr2[0].length;

        int[][] answer = new int[row1][col2]; // 결과를 저장할 2차원배열
        

        for(int i = 0;i < row1;i++) {
            for(int j = 0; j < col2;j++){
                for(int k = 0;k< col1;k++){ // 두 행렬의 데이터를 곱해 결과 리스트에 더한다
                    answer[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        return answer;
    }
}