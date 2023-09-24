#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ScaleYNegateXPointMap_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xfcdca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap.Map
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::Map)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xfcdcd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Math::EC::ECPointMap
constexpr  Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::operator Org::BouncyCastle::Math::EC::ECPointMap() const noexcept {
return Org::BouncyCastle::Math::EC::ECPointMap(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::__set_scale(Org::BouncyCastle::Math::EC::ECFieldElement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECFieldElement>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::__get_scale() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::New_ctor(Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap>(scale))};
return o;
}
 void Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::_ctor(Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap::Map(Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap>::get(),
                            "Map",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p);
}
