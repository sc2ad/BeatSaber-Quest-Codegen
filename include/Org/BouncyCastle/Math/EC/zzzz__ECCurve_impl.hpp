#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::*)(Org::BouncyCastle::Math::EC::ECCurve, int32_t, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf3cc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config.SetCoordinateSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::*)(int32_t)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::SetCoordinateSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3e628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "SetCoordinateSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config.SetEndomorphism
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::SetEndomorphism)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3e630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "SetEndomorphism",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config.SetMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::*)(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::SetMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3e638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "SetMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::*)()>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::Create)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xf3e640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__set_outer(Org::BouncyCastle::Math::EC::ECCurve value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECCurve>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__get_outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__set_coord(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__get_coord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__set_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>(value));
}
constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__get_endomorphism() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__set_multiplier(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>(value));
}
constexpr Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::__get_multiplier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::New_ctor(Org::BouncyCastle::Math::EC::ECCurve outer, int32_t coord, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier multiplier)  {
Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>(outer, coord, endomorphism, multiplier))};
return o;
}
 void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::_ctor(Org::BouncyCastle::Math::EC::ECCurve outer, int32_t coord, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier multiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, coord, endomorphism, multiplier);
}
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::SetCoordinateSystem(int32_t coord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "SetCoordinateSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config, false>(const_cast<void*>(instance), ___internal_method, coord);
}
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::SetEndomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "SetEndomorphism",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config, false>(const_cast<void*>(instance), ___internal_method, endomorphism);
}
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::SetMultiplier(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier multiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "SetMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config, false>(const_cast<void*>(instance), ___internal_method, multiplier);
}
 Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECCurve, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::*)(Org::BouncyCastle::Math::EC::ECCurve, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xf3daf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable.get_Size
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::*)()>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3e724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable.Lookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::*)(int32_t)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::Lookup)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xf3e72c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable.LookupVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::*)(int32_t)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::LookupVar)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xf3e9ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable.CreatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::CreatePoint)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf3e8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            "CreatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::__set_m_outer(Org::BouncyCastle::Math::EC::ECCurve value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECCurve>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::__get_m_outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::__set_m_table(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::__get_m_table() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::__set_m_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::__get_m_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::New_ctor(Org::BouncyCastle::Math::EC::ECCurve outer, ::ArrayW<uint8_t> table, int32_t size)  {
Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>(outer, table, size))};
return o;
}
 void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::_ctor(Org::BouncyCastle::Math::EC::ECCurve outer, ::ArrayW<uint8_t> table, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, table, size);
}
 int32_t Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::get_Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            "get_Size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::Lookup(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            "Lookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, index);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::LookupVar(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            "LookupVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, index);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable::CreatePoint(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable>::get(),
                            "CreatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.GetAllCoordinateSystems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)()>(&Org::BouncyCastle::Math::EC::ECCurve::GetAllCoordinateSystems)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf3cb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "GetAllCoordinateSystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::Field::IFiniteField)>(&Org::BouncyCastle::Math::EC::ECCurve::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf3cba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::Field::IFiniteField>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_FieldSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_FieldSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.FromBigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECCurve::FromBigInteger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.IsValidFieldElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECCurve::IsValidFieldElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.RandomFieldElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.RandomFieldElementMult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.Configure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::Configure)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xf3cbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.ValidatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf3cc98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.ValidatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf3cd28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CreatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECCurve::CreatePoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf3cdb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CreatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::CreatePoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf3cdc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CloneCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::CloneCurve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CreateRawPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement, Org::BouncyCastle::Math::EC::ECFieldElement, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CreateRawPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement, Org::BouncyCastle::Math::EC::ECFieldElement, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CreateDefaultMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::CreateDefaultMultiplier)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf3ce30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.SupportsCoordinateSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(int32_t)>(&Org::BouncyCastle::Math::EC::ECCurve::SupportsCoordinateSystem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf3cef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.GetPreCompInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint, ::StringW)>(&Org::BouncyCastle::Math::EC::ECCurve::GetPreCompInfo)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xf3cefc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint, ::StringW, Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback)>(&Org::BouncyCastle::Math::EC::ECCurve::Precompute)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xf3d114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.ImportPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECCurve::ImportPoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xf3d484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.NormalizeAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>)>(&Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf3d594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.NormalizeAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, int32_t, int32_t, Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xf3d5c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_Infinity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Infinity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_Field
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IFiniteField (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Field)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3d8b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_A
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_A)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3d8b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_B
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_B)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3d8c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_Order
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3d8c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_Cofactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Cofactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3d8d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.get_CoordinateSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_CoordinateSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3d8d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CreateCacheSafeLookupTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECLookupTable (Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::ECCurve::CreateCacheSafeLookupTable)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xf3d8e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CheckPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECCurve::CheckPoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf3db30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CheckPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>)>(&Org::BouncyCastle::Math::EC::ECCurve::CheckPoints)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf3dbc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.CheckPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::ECCurve::CheckPoints)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xf3dbf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECCurve)>(&Org::BouncyCastle::Math::EC::ECCurve::Equals)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf3dd5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Math::EC::ECCurve::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf3deac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xf3df38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.DecompressPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(int32_t, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECCurve::DecompressPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.GetEndomorphism
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::GetEndomorphism)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3e004;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.GetMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::GetMultiplier)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xf3e00c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECCurve.DecodePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::ECCurve::DecodePoint)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xf3e0c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_field(Org::BouncyCastle::Math::Field::IFiniteField value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::Field::IFiniteField, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::Field::IFiniteField>(value));
}
constexpr Org::BouncyCastle::Math::Field::IFiniteField Org::BouncyCastle::Math::EC::ECCurve::__get_m_field() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::Field::IFiniteField, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_a(Org::BouncyCastle::Math::EC::ECFieldElement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECFieldElement>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::__get_m_a() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_b(Org::BouncyCastle::Math::EC::ECFieldElement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECFieldElement>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::__get_m_b() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_order(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::ECCurve::__get_m_order() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_cofactor(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::ECCurve::__get_m_cofactor() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_coord(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Math::EC::ECCurve::__get_m_coord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>(value));
}
constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism Org::BouncyCastle::Math::EC::ECCurve::__get_m_endomorphism() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__set_m_multiplier(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>(value));
}
constexpr Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier Org::BouncyCastle::Math::EC::ECCurve::__get_m_multiplier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::ECCurve::GetAllCoordinateSystems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "GetAllCoordinateSystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::ECCurve::New_ctor(Org::BouncyCastle::Math::Field::IFiniteField field)  {
Org::BouncyCastle::Math::EC::ECCurve o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::ECCurve>(field))};
return o;
}
 void Org::BouncyCastle::Math::EC::ECCurve::_ctor(Org::BouncyCastle::Math::Field::IFiniteField field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::Field::IFiniteField>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, field);
}
 int32_t Org::BouncyCastle::Math::EC::ECCurve::get_FieldSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_FieldSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::FromBigInteger(Org::BouncyCastle::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "FromBigInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, x);
}
 bool Org::BouncyCastle::Math::EC::ECCurve::IsValidFieldElement(Org::BouncyCastle::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "IsValidFieldElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "RandomFieldElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, r);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "RandomFieldElementMult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, r);
}
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config Org::BouncyCastle::Math::EC::ECCurve::Configure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "Configure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "ValidatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "ValidatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y, withCompression);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::CreatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CreatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::CreatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CreatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y, withCompression);
}
 Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::ECCurve::CloneCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CloneCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECCurve, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CreateRawPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y, withCompression);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CreateRawPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y, zs, withCompression);
}
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier Org::BouncyCastle::Math::EC::ECCurve::CreateDefaultMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CreateDefaultMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECCurve::SupportsCoordinateSystem(int32_t coord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "SupportsCoordinateSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, coord);
}
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Org::BouncyCastle::Math::EC::ECCurve::GetPreCompInfo(Org::BouncyCastle::Math::EC::ECPoint point, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "GetPreCompInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, point, name);
}
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Org::BouncyCastle::Math::EC::ECCurve::Precompute(Org::BouncyCastle::Math::EC::ECPoint point, ::StringW name, Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, point, name, callback);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::ImportPoint(Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "ImportPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "NormalizeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, points);
}
 void Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len, Org::BouncyCastle::Math::EC::ECFieldElement iso)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "NormalizeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, points, off, len, iso);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::get_Infinity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_Infinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::Field::IFiniteField Org::BouncyCastle::Math::EC::ECCurve::get_Field()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_Field",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::Field::IFiniteField, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::get_A()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_A",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECCurve::get_B()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_B",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::ECCurve::get_Order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_Order",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::ECCurve::get_Cofactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_Cofactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Math::EC::ECCurve::get_CoordinateSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "get_CoordinateSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECLookupTable Org::BouncyCastle::Math::EC::ECCurve::CreateCacheSafeLookupTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CreateCacheSafeLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECLookupTable, false>(const_cast<void*>(instance), ___internal_method, points, off, len);
}
 void Org::BouncyCastle::Math::EC::ECCurve::CheckPoint(Org::BouncyCastle::Math::EC::ECPoint point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point);
}
 void Org::BouncyCastle::Math::EC::ECCurve::CheckPoints(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CheckPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, points);
}
 void Org::BouncyCastle::Math::EC::ECCurve::CheckPoints(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "CheckPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, points, off, len);
}
 bool Org::BouncyCastle::Math::EC::ECCurve::Equals(Org::BouncyCastle::Math::EC::ECCurve other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool Org::BouncyCastle::Math::EC::ECCurve::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t Org::BouncyCastle::Math::EC::ECCurve::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::DecompressPoint(int32_t yTilde, Org::BouncyCastle::Math::BigInteger X1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "DecompressPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, yTilde, X1);
}
 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism Org::BouncyCastle::Math::EC::ECCurve::GetEndomorphism()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "GetEndomorphism",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier Org::BouncyCastle::Math::EC::ECCurve::GetMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "GetMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECCurve::DecodePoint(::ArrayW<uint8_t> encoded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECCurve>::get(),
                            "DecodePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, encoded);
}
