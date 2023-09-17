#pragma once
#include "System/zzzz__Random_impl.hpp"
namespace {
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__DigestRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextCounterValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextCounterValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xeb4d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextCounterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.get_Master
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom (*)()>(&::Org::BouncyCastle::Security::SecureRandom::get_Master)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xeb4df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "get_Master",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.CreatePrng
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator (*)(::StringW, bool)>(&::Org::BouncyCastle::Security::SecureRandom::CreatePrng)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xeb4e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "CreatePrng",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetNextBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Security::SecureRandom, int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::GetNextBytes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xeb3a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetNextBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom (*)(::StringW)>(&::Org::BouncyCastle::Security::SecureRandom::GetInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xeb4ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom (*)(::StringW, bool)>(&::Org::BouncyCastle::Security::SecureRandom::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xeb504c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::GetSeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xeb5240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xeab0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xeb52d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator)>(&::Org::BouncyCastle::Security::SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeb51d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GenerateSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Security::SecureRandom::*)(int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::GenerateSeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xeb5368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.SetSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xeb53f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.SetSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(int64_t)>(&::Org::BouncyCastle::Security::SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xeb54a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::Next)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xeb554c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)(int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::Next)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xeb556c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::Next)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xeb565c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xeb5724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xeb57d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextDouble)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xeb5894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextInt)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xeb594c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextLong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextLong)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xeb59b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Security::SecureRandom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Security::SecureRandom::__set_counter(int64_t value)  {
::cordl_internals::setStaticField<int64_t, "counter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get>(std::forward<int64_t>(value));
}
 int64_t ::Org::BouncyCastle::Security::SecureRandom::__get_counter()  {
return ::cordl_internals::getStaticField<int64_t, "counter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get>();
}
 void ::Org::BouncyCastle::Security::SecureRandom::__set_master(::Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Security::SecureRandom, "master", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get>(std::forward<::Org::BouncyCastle::Security::SecureRandom>(value));
}
 ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Security::SecureRandom::__get_master()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Security::SecureRandom, "master", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get>();
}
constexpr void ::Org::BouncyCastle::Security::SecureRandom::__set_generator(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator ::Org::BouncyCastle::Security::SecureRandom::__get_generator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Security::SecureRandom::__set_DoubleScale(double_t value)  {
::cordl_internals::setStaticField<double_t, "DoubleScale", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get>(std::forward<double_t>(value));
}
 double_t ::Org::BouncyCastle::Security::SecureRandom::__get_DoubleScale()  {
return ::cordl_internals::getStaticField<double_t, "DoubleScale", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get>();
}
 int64_t ::Org::BouncyCastle::Security::SecureRandom::NextCounterValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextCounterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
 ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Security::SecureRandom::get_Master()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "get_Master",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom, false>(nullptr, ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator ::Org::BouncyCastle::Security::SecureRandom::CreatePrng(::StringW digestName, bool autoSeed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "CreatePrng",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, false>(nullptr, ___internal_method, digestName, autoSeed);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Security::SecureRandom::GetNextBytes(::Org::BouncyCastle::Security::SecureRandom secureRandom, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetNextBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, secureRandom, length);
}
 ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Security::SecureRandom::GetInstance(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom, false>(nullptr, ___internal_method, algorithm);
}
 ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Security::SecureRandom::GetInstance(::StringW algorithm, bool autoSeed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom, false>(nullptr, ___internal_method, algorithm, autoSeed);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Security::SecureRandom::GetSeed(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GetSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, length);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Security::SecureRandom::SecureRandom()  : ::System::Random(THROW_UNLESS(::il2cpp_utils::New<SecureRandom>())) {}
 void ::Org::BouncyCastle::Security::SecureRandom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Security::SecureRandom::SecureRandom(::ArrayW<uint8_t> seed)  : ::System::Random(THROW_UNLESS(::il2cpp_utils::New<SecureRandom>(seed))) {}
 void ::Org::BouncyCastle::Security::SecureRandom::_ctor(::ArrayW<uint8_t> seed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seed);
}
// Ctor Parameters [CppParam { name: "generator", ty: "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Security::SecureRandom::SecureRandom(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator generator)  : ::System::Random(THROW_UNLESS(::il2cpp_utils::New<SecureRandom>(generator))) {}
 void ::Org::BouncyCastle::Security::SecureRandom::_ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator generator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, generator);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Security::SecureRandom::GenerateSeed(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, length);
}
 void ::Org::BouncyCastle::Security::SecureRandom::SetSeed(::ArrayW<uint8_t> seed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "SetSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seed);
}
 void ::Org::BouncyCastle::Security::SecureRandom::SetSeed(int64_t seed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "SetSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seed);
}
 int32_t ::Org::BouncyCastle::Security::SecureRandom::Next()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Security::SecureRandom::Next(int32_t maxValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, maxValue);
}
 int32_t ::Org::BouncyCastle::Security::SecureRandom::Next(int32_t minValue, int32_t maxValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, minValue, maxValue);
}
 void ::Org::BouncyCastle::Security::SecureRandom::NextBytes(::ArrayW<uint8_t> buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf);
}
 void ::Org::BouncyCastle::Security::SecureRandom::NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
 double_t ::Org::BouncyCastle::Security::SecureRandom::NextDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Security::SecureRandom::NextInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::Org::BouncyCastle::Security::SecureRandom::NextLong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::SecureRandom>::get(),
                            "NextLong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
