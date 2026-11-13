function isSubsequence(s: string, t: string): boolean {
  let si = 0, ti = 0;
  while(si < s.length && ti < t.length) {
    if(s[si] === t[ti]) si++;
    ti++;
  }
  return si === s.length;
};