
bool set_alarm(const bool& employed, const bool& vacation) {
  if (employed && !vacation)
    return true;
  return false;
}
