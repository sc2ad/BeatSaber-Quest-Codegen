#pragma once
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::ECEndomorphism.get_PointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPointMap (Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::*)()>(&Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_PointMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::ECEndomorphism.get_HasEfficientPointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::*)()>(&Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_HasEfficientPointMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Math::EC::ECPointMap Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_PointMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(),
                            "get_PointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPointMap, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_HasEfficientPointMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(),
                            "get_HasEfficientPointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
