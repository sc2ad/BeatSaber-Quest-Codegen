#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.Inverse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (*)(int32_t, ::ArrayW<int32_t>, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::Inverse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf756e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "Inverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.BuildField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IFiniteField (*)(int32_t, int32_t, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xf75770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "BuildField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(int32_t, int32_t, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf75950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.CreatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger, bool)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xf75984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.IsValidFieldElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::IsValidFieldElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xf75ae4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.RandomFieldElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xf75b38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.RandomFieldElementMult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf75b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.DecompressPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(int32_t, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xf75c54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.SolveQuadraticEquation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xf75e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "SolveQuadraticEquation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.GetSi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::BigInteger> (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xf76154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.get_IsKoblitz
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf76248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve.ImplRandomFieldElementMult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (*)(Org::BouncyCastle::Security::SecureRandom, int32_t)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf75c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "ImplRandomFieldElementMult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::AbstractF2mCurve::__set_si(::ArrayW<Org::BouncyCastle::Math::BigInteger> value)  {
::cordl_internals::setInstanceField<::ArrayW<Org::BouncyCastle::Math::BigInteger>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Org::BouncyCastle::Math::BigInteger>>(value));
}
constexpr ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Math::EC::AbstractF2mCurve::__get_si() const {
return ::cordl_internals::getInstanceField<::ArrayW<Org::BouncyCastle::Math::BigInteger>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::AbstractF2mCurve::Inverse(int32_t m, ::ArrayW<int32_t> ks, Org::BouncyCastle::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "Inverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, m, ks, x);
}
 Org::BouncyCastle::Math::Field::IFiniteField Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField(int32_t m, int32_t k1, int32_t k2, int32_t k3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "BuildField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::Field::IFiniteField, false>(nullptr, ___internal_method, m, k1, k2, k3);
}
// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k3", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::EC::AbstractF2mCurve::AbstractF2mCurve(int32_t m, int32_t k1, int32_t k2, int32_t k3)  : Org::BouncyCastle::Math::EC::ECCurve(THROW_UNLESS(::il2cpp_utils::New<AbstractF2mCurve>(m, k1, k2, k3))) {}
 void Org::BouncyCastle::Math::EC::AbstractF2mCurve::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, m, k1, k2, k3);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "CreatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, x, y, withCompression);
}
 bool Org::BouncyCastle::Math::EC::AbstractF2mCurve::IsValidFieldElement(Org::BouncyCastle::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "IsValidFieldElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "RandomFieldElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, r);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "RandomFieldElementMult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, r);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint(int32_t yTilde, Org::BouncyCastle::Math::BigInteger X1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "DecompressPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, yTilde, X1);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation(Org::BouncyCastle::Math::EC::ECFieldElement beta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "SolveQuadraticEquation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, beta);
}
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "GetSi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "get_IsKoblitz",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r, int32_t m)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::AbstractF2mCurve>::get(),
                            "ImplRandomFieldElementMult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, r, m);
}
