#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/IL2CPP/CompilerServices/zzzz__Il2CppEagerStaticClassConstructionAttribute_def.hpp"
//  Writing Method size for method: Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::*)()>(&Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b2845c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::New_ctor()  {
Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute o{THROW_UNLESS(::il2cpp_utils::New<Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute>())};
return o;
}
 void Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
