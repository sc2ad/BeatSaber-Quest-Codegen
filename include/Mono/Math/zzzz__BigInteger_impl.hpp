#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Math::Mono__Math__BigInteger__Sign::Mono__Math__BigInteger__Sign(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Math::Mono__Math__BigInteger__Sign::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Math::Mono__Math__BigInteger__Sign::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Mono::Math::Mono__Math__BigInteger__Sign  Mono::Math::Mono__Math__BigInteger__Sign::Negative{-1};
constexpr Mono::Math::Mono__Math__BigInteger__Sign  Mono::Math::Mono__Math__BigInteger__Sign::Zero{0};
constexpr Mono::Math::Mono__Math__BigInteger__Sign  Mono::Math::Mono__Math__BigInteger__Sign::Positive{1};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__ModulusRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::Mono__Math__BigInteger__ModulusRing::*)(Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__ModulusRing::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22a1900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__ModulusRing.BarrettReduction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::Mono__Math__BigInteger__ModulusRing::*)(Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__ModulusRing::BarrettReduction)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x22a1bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "BarrettReduction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__ModulusRing.Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (Mono::Math::Mono__Math__BigInteger__ModulusRing::*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__ModulusRing::Multiply)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22a21fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__ModulusRing.Difference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (Mono::Math::Mono__Math__BigInteger__ModulusRing::*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__ModulusRing::Difference)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x22a2378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Difference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__ModulusRing.Pow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (Mono::Math::Mono__Math__BigInteger__ModulusRing::*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__ModulusRing::Pow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22a19d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Pow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__ModulusRing.Pow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (Mono::Math::Mono__Math__BigInteger__ModulusRing::*)(uint32_t, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__ModulusRing::Pow)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22a2534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Pow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Math::Mono__Math__BigInteger__ModulusRing::__set_mod(Mono::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Mono::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Math::BigInteger>(value));
}
constexpr Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__ModulusRing::__get_mod() const {
return ::cordl_internals::getInstanceField<Mono::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Math::Mono__Math__BigInteger__ModulusRing::__set_constant(Mono::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Mono::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Math::BigInteger>(value));
}
constexpr Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__ModulusRing::__get_constant() const {
return ::cordl_internals::getInstanceField<Mono::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Math::Mono__Math__BigInteger__ModulusRing Mono::Math::Mono__Math__BigInteger__ModulusRing::New_ctor(Mono::Math::BigInteger modulus)  {
Mono::Math::Mono__Math__BigInteger__ModulusRing o{THROW_UNLESS(::il2cpp_utils::New<Mono::Math::Mono__Math__BigInteger__ModulusRing>(modulus))};
return o;
}
 void Mono::Math::Mono__Math__BigInteger__ModulusRing::_ctor(Mono::Math::BigInteger modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, modulus);
}
 void Mono::Math::Mono__Math__BigInteger__ModulusRing::BarrettReduction(Mono::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "BarrettReduction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__ModulusRing::Multiply(Mono::Math::BigInteger a, Mono::Math::BigInteger b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__ModulusRing::Difference(Mono::Math::BigInteger a, Mono::Math::BigInteger b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Difference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__ModulusRing::Pow(Mono::Math::BigInteger a, Mono::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Pow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, a, k);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__ModulusRing::Pow(uint32_t b, Mono::Math::BigInteger exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__ModulusRing>::get(),
                            "Pow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, b, exp);
}
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.Subtract
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__Kernel::Subtract)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x22a0018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "Subtract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.MinusEq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__Kernel::MinusEq)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22a1f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "MinusEq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.PlusEq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__Kernel::PlusEq)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x22a2084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "PlusEq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::Mono__Math__BigInteger__Sign (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__Kernel::Compare)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x229fed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.SingleByteDivideInPlace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::SingleByteDivideInPlace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22a11f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "SingleByteDivideInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.DwordMod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::DwordMod)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22a01bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "DwordMod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.DwordDivMod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Mono::Math::BigInteger> (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::DwordDivMod)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x22a25ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "DwordDivMod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.multiByteDivide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Mono::Math::BigInteger> (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__Kernel::multiByteDivide)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x22a0228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "multiByteDivide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.LeftShift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, int32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::LeftShift)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x22a07a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "LeftShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.RightShift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, int32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::RightShift)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22a0978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "RightShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint32_t>, uint32_t, uint32_t, ::ArrayW<uint32_t>, uint32_t, uint32_t, ::ArrayW<uint32_t>, uint32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::Multiply)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22a06a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.MultiplyMod2p32pmod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::MultiplyMod2p32pmod)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x22a1e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "MultiplyMod2p32pmod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.modInverse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::Mono__Math__BigInteger__Kernel::modInverse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22a273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "modInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Mono__Math__BigInteger__Kernel.modInverse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::Mono__Math__BigInteger__Kernel::modInverse)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x22a1410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "modInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__Kernel::Subtract(Mono::Math::BigInteger big, Mono::Math::BigInteger small)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "Subtract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, big, small);
}
 void Mono::Math::Mono__Math__BigInteger__Kernel::MinusEq(Mono::Math::BigInteger big, Mono::Math::BigInteger small)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "MinusEq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, big, small);
}
 void Mono::Math::Mono__Math__BigInteger__Kernel::PlusEq(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "PlusEq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bi1, bi2);
}
 Mono::Math::Mono__Math__BigInteger__Sign Mono::Math::Mono__Math__BigInteger__Kernel::Compare(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::Mono__Math__BigInteger__Sign, false>(nullptr, ___internal_method, bi1, bi2);
}
 uint32_t Mono::Math::Mono__Math__BigInteger__Kernel::SingleByteDivideInPlace(Mono::Math::BigInteger n, uint32_t d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "SingleByteDivideInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, n, d);
}
 uint32_t Mono::Math::Mono__Math__BigInteger__Kernel::DwordMod(Mono::Math::BigInteger n, uint32_t d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "DwordMod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, n, d);
}
 ::ArrayW<Mono::Math::BigInteger> Mono::Math::Mono__Math__BigInteger__Kernel::DwordDivMod(Mono::Math::BigInteger n, uint32_t d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "DwordDivMod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Mono::Math::BigInteger>, false>(nullptr, ___internal_method, n, d);
}
 ::ArrayW<Mono::Math::BigInteger> Mono::Math::Mono__Math__BigInteger__Kernel::multiByteDivide(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "multiByteDivide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Mono::Math::BigInteger>, false>(nullptr, ___internal_method, bi1, bi2);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__Kernel::LeftShift(Mono::Math::BigInteger bi, int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "LeftShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi, n);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__Kernel::RightShift(Mono::Math::BigInteger bi, int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "RightShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi, n);
}
 void Mono::Math::Mono__Math__BigInteger__Kernel::Multiply(::ArrayW<uint32_t> x, uint32_t xOffset, uint32_t xLen, ::ArrayW<uint32_t> y, uint32_t yOffset, uint32_t yLen, ::ArrayW<uint32_t> d, uint32_t dOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
}
 void Mono::Math::Mono__Math__BigInteger__Kernel::MultiplyMod2p32pmod(::ArrayW<uint32_t> x, int32_t xOffset, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOffest, int32_t yLen, ::ArrayW<uint32_t> d, int32_t dOffset, int32_t mod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "MultiplyMod2p32pmod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
}
 uint32_t Mono::Math::Mono__Math__BigInteger__Kernel::modInverse(Mono::Math::BigInteger bi, uint32_t modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "modInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bi, modulus);
}
 Mono::Math::BigInteger Mono::Math::Mono__Math__BigInteger__Kernel::modInverse(Mono::Math::BigInteger bi, Mono::Math::BigInteger modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Mono__Math__BigInteger__Kernel>::get(),
                            "modInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi, modulus);
}
//  Writing Method size for method: Mono::Math::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(Mono::Math::Mono__Math__BigInteger__Sign, uint32_t)>(&Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x229fb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Mono__Math__BigInteger__Sign>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(Mono::Math::BigInteger)>(&Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x229fbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x229fcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(::ArrayW<uint8_t>)>(&Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x229b77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(uint32_t)>(&Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x229fde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Implicit_Mono__Math__BigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(uint32_t)>(&Mono::Math::BigInteger::op_Implicit_Mono__Math__BigInteger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x229ae6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Implicit_Mono__Math__BigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(int32_t)>(&Mono::Math::BigInteger::op_Implicit_Mono__Math__BigInteger)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x229b21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Subtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_Subtraction)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x229b2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Modulus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229af38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Modulus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Modulus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x229b450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Modulus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Division
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_Division)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22a067c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Division",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_Multiply)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x229afec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_LeftShift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, int32_t)>(&Mono::Math::BigInteger::op_LeftShift)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a07a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_LeftShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_RightShift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(Mono::Math::BigInteger, int32_t)>(&Mono::Math::BigInteger::op_RightShift)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a0974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_RightShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.get_Rng
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RandomNumberGenerator (*)()>(&Mono::Math::BigInteger::get_Rng)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22a0af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "get_Rng",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.GenerateRandom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(int32_t, System::Security::Cryptography::RandomNumberGenerator)>(&Mono::Math::BigInteger::GenerateRandom)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x22a0b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GenerateRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RandomNumberGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.GenerateRandom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(int32_t)>(&Mono::Math::BigInteger::GenerateRandom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22a0d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GenerateRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.BitCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::BitCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x229b19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "BitCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.TestBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger::*)(int32_t)>(&Mono::Math::BigInteger::TestBit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22a0d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "TestBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.SetBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(uint32_t)>(&Mono::Math::BigInteger::SetBit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a0df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "SetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.SetBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)(uint32_t, bool)>(&Mono::Math::BigInteger::SetBit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22a0dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "SetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.LowestSetBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::LowestSetBit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22a0e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "LowestSetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::GetBytes)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x229be64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x229fe68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, uint32_t)>(&Mono::Math::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22a0ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x229b5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x229af3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_GreaterThan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a0f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_GreaterThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_LessThan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_LessThan)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x229b208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_LessThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_GreaterThanOrEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a0f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_GreaterThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.op_LessThanOrEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a0f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_LessThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Math::BigInteger::*)(uint32_t)>(&Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22a0f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Math::BigInteger::*)(uint32_t, ::StringW)>(&Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x22a0fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.Normalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::Normalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x229fd88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229bae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22a1270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Math::BigInteger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a12c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Math::BigInteger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger::*)(::bs_hook::Il2CppWrapperType)>(&Mono::Math::BigInteger::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x22a12d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Math::BigInteger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.ModInverse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (Mono::Math::BigInteger::*)(Mono::Math::BigInteger)>(&Mono::Math::BigInteger::ModInverse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229b44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ModInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.ModPow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (Mono::Math::BigInteger::*)(Mono::Math::BigInteger, Mono::Math::BigInteger)>(&Mono::Math::BigInteger::ModPow)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x229b9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ModPow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.GeneratePseudoPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger (*)(int32_t)>(&Mono::Math::BigInteger::GeneratePseudoPrime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x229aecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GeneratePseudoPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::BigInteger.Incr2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger::*)()>(&Mono::Math::BigInteger::Incr2)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a1ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Incr2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Math::BigInteger::__set_length(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::Math::BigInteger::__get_length() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Math::BigInteger::__set_data(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Mono::Math::BigInteger::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Mono::Math::BigInteger::__set_smallPrimes(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "smallPrimes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Mono::Math::BigInteger::__get_smallPrimes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "smallPrimes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get>();
}
 void Mono::Math::BigInteger::__set_rng(System::Security::Cryptography::RandomNumberGenerator value)  {
::cordl_internals::setStaticField<System::Security::Cryptography::RandomNumberGenerator, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get>(std::forward<System::Security::Cryptography::RandomNumberGenerator>(value));
}
 System::Security::Cryptography::RandomNumberGenerator Mono::Math::BigInteger::__get_rng()  {
return ::cordl_internals::getStaticField<System::Security::Cryptography::RandomNumberGenerator, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get>();
}
 Mono::Math::BigInteger Mono::Math::BigInteger::New_ctor(Mono::Math::Mono__Math__BigInteger__Sign sign, uint32_t len)  {
Mono::Math::BigInteger o{THROW_UNLESS(::il2cpp_utils::New<Mono::Math::BigInteger>(sign, len))};
return o;
}
 void Mono::Math::BigInteger::_ctor(Mono::Math::Mono__Math__BigInteger__Sign sign, uint32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Mono__Math__BigInteger__Sign>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sign, len);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::New_ctor(Mono::Math::BigInteger bi)  {
Mono::Math::BigInteger o{THROW_UNLESS(::il2cpp_utils::New<Mono::Math::BigInteger>(bi))};
return o;
}
 void Mono::Math::BigInteger::_ctor(Mono::Math::BigInteger bi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bi);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::New_ctor(Mono::Math::BigInteger bi, uint32_t len)  {
Mono::Math::BigInteger o{THROW_UNLESS(::il2cpp_utils::New<Mono::Math::BigInteger>(bi, len))};
return o;
}
 void Mono::Math::BigInteger::_ctor(Mono::Math::BigInteger bi, uint32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bi, len);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::New_ctor(::ArrayW<uint8_t> inData)  {
Mono::Math::BigInteger o{THROW_UNLESS(::il2cpp_utils::New<Mono::Math::BigInteger>(inData))};
return o;
}
 void Mono::Math::BigInteger::_ctor(::ArrayW<uint8_t> inData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inData);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::New_ctor(uint32_t ui)  {
Mono::Math::BigInteger o{THROW_UNLESS(::il2cpp_utils::New<Mono::Math::BigInteger>(ui))};
return o;
}
 void Mono::Math::BigInteger::_ctor(uint32_t ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ui);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_Implicit_Mono__Math__BigInteger(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, value);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_Implicit_Mono__Math__BigInteger(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, value);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_Subtraction(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi1, bi2);
}
 uint32_t Mono::Math::BigInteger::op_Modulus(Mono::Math::BigInteger bi, uint32_t ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Modulus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bi, ui);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_Modulus(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Modulus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi1, bi2);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_Division(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Division",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi1, bi2);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_Multiply(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi1, bi2);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_LeftShift(Mono::Math::BigInteger bi1, int32_t shiftVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_LeftShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi1, shiftVal);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::op_RightShift(Mono::Math::BigInteger bi1, int32_t shiftVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_RightShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bi1, shiftVal);
}
 System::Security::Cryptography::RandomNumberGenerator Mono::Math::BigInteger::get_Rng()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "get_Rng",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::RandomNumberGenerator, false>(nullptr, ___internal_method);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::GenerateRandom(int32_t bits, System::Security::Cryptography::RandomNumberGenerator rng)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GenerateRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RandomNumberGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bits, rng);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::GenerateRandom(int32_t bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GenerateRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bits);
}
 int32_t Mono::Math::BigInteger::BitCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "BitCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Math::BigInteger::TestBit(int32_t bitNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "TestBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bitNum);
}
 void Mono::Math::BigInteger::SetBit(uint32_t bitNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "SetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bitNum);
}
 void Mono::Math::BigInteger::SetBit(uint32_t bitNum, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "SetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bitNum, value);
}
 int32_t Mono::Math::BigInteger::LowestSetBit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "LowestSetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Mono::Math::BigInteger::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Math::BigInteger::op_Equality(Mono::Math::BigInteger bi1, uint32_t ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, ui);
}
 bool Mono::Math::BigInteger::op_Inequality(Mono::Math::BigInteger bi1, uint32_t ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, ui);
}
 bool Mono::Math::BigInteger::op_Equality(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
 bool Mono::Math::BigInteger::op_Inequality(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
 bool Mono::Math::BigInteger::op_GreaterThan(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_GreaterThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
 bool Mono::Math::BigInteger::op_LessThan(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_LessThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
 bool Mono::Math::BigInteger::op_GreaterThanOrEqual(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_GreaterThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
 bool Mono::Math::BigInteger::op_LessThanOrEqual(Mono::Math::BigInteger bi1, Mono::Math::BigInteger bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "op_LessThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
 ::StringW Mono::Math::BigInteger::ToString(uint32_t radix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, radix);
}
 ::StringW Mono::Math::BigInteger::ToString(uint32_t radix, ::StringW characterSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, radix, characterSet);
}
 void Mono::Math::BigInteger::Normalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Math::BigInteger::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Mono::Math::BigInteger::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Mono::Math::BigInteger::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Math::BigInteger::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::ModInverse(Mono::Math::BigInteger modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ModInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, modulus);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::ModPow(Mono::Math::BigInteger exp, Mono::Math::BigInteger n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "ModPow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, exp, n);
}
 Mono::Math::BigInteger Mono::Math::BigInteger::GeneratePseudoPrime(int32_t bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "GeneratePseudoPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Math::BigInteger, false>(nullptr, ___internal_method, bits);
}
 void Mono::Math::BigInteger::Incr2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::BigInteger>::get(),
                            "Incr2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
