SELECT 
  score, 
  (SELECT count(distinct score) FROM Scores WHERE score >= s.Score) AS rank
FROM Scores s
ORDER BY score desc
