template< typename Istream >
static std::vector< Card9 > readCard9List( Istream& is, const int ntemp ){
  std::vector< Card9 > card9List;

  for( int i = 0; i < ntemp; i++ ){
    do {
      card9List.emplace_back( is );
    } while ( card9List.back().mfd.value );
    card9List.pop_back();
  }

  return card9List;
}
