#pragma once
namespace {
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Security/Cryptography/zzzz__AesCryptoServiceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState.get_isValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::*)()>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState.EncryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::*)(::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState.TryDecryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::*)(::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>::get(),
                            "get_isValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param extraPrefixBytes: int32_t (default: 0)
 void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::EncryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, offset, length, extraPrefixBytes);
}
 bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState::TryDecryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>::get(),
                            "TryDecryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data, offset, length);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.get_isValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)()>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xda9704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "get_isValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.EncryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xda971c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.TryDecryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xda97a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "TryDecryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.ComputeSendMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::ComputeSendMac)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xda7ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "ComputeSendMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.ComputeReceiveMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::ComputeReceiveMac)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xda8b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "ComputeReceiveMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.IsValidSequenceNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(uint32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::IsValidSequenceNum)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xda8a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "IsValidSequenceNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.PutSequenceNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(uint32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::PutSequenceNum)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xda8db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "PutSequenceNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.GetNextSentSequenceNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)()>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::GetNextSentSequenceNum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda7ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "GetNextSentSequenceNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xda7220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.MakeSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::MakeSeed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xda981c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "MakeSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.PRF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::PRF)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xda98fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "PRF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.PRF_Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ByRef<int32_t>)>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::PRF_Hash)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xda99e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "PRF_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::*)()>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xda9bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState
constexpr  ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::operator ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState() const noexcept {
return ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__isValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__isValid() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__lastSentSequenceNum(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__lastSentSequenceNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__hasReceivedSequenceNum(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__hasReceivedSequenceNum() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__lastReceivedSequenceNum(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__lastReceivedSequenceNum() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__receivedSequenceNumBuffer(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__receivedSequenceNumBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set_sendKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get_sendKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set_receiveKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get_receiveKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__sendMacKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__sendMacKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__receiveMacKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__receiveMacKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__sendMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac> value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac>>(value));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__sendMacQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__set__receiveMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac> value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac>>(value));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::__get__receiveMacQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "get_isValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param extraPrefixBytes: int32_t (default: 0)
 void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::EncryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, offset, length, extraPrefixBytes);
}
 bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::TryDecryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "TryDecryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data, offset, length);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::ComputeSendMac(::ArrayW<uint8_t> data, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "ComputeSendMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, data, offset, count);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::ComputeReceiveMac(::ArrayW<uint8_t> data, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "ComputeReceiveMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, data, offset, count);
}
 bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::IsValidSequenceNum(uint32_t sequenceNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "IsValidSequenceNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sequenceNum);
}
 bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::PutSequenceNum(uint32_t sequenceNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "PutSequenceNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sequenceNum);
}
 uint32_t ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::GetNextSentSequenceNum()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "GetNextSentSequenceNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverSeed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clientSeed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::____GlobalNamespace__EncryptionUtility__EncryptionState(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EncryptionUtility__EncryptionState>(preMasterSecret, serverSeed, clientSeed, isClient))) {}
 void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::_ctor(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::MakeSeed(::ArrayW<uint8_t> baseSeed, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "MakeSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, baseSeed, serverSeed, clientSeed);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::PRF(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "PRF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, key, seed, length);
}
 void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::PRF_Hash(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "PRF_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, seed, length);
}
 void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda7480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0._CreateEncryptionStateAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState (::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::_CreateEncryptionStateAsync_b__0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xda9be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0>::get(),
                            "<CreateEncryptionStateAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__set_preMasterSecret(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__get_preMasterSecret() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__set_serverSeed(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__get_serverSeed() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__set_clientSeed(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__get_clientSeed() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__set_isClient(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::__get_isClient() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState ::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0::_CreateEncryptionStateAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EncryptionUtility____c__DisplayClass18_0>::get(),
                            "<CreateEncryptionStateAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&::GlobalNamespace::EncryptionUtility::CreateEncryptionState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xda7198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "CreateEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionStateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState> (*)(::BGNet::Core::ITaskUtility, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&::GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xda4dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "CreateEncryptionStateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.IsValidLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::EncryptionUtility::IsValidLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda7488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "IsValidLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.EncryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState, ::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::EncryptData)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0xda74a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.TryDecryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState, ::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::EncryptionUtility::TryDecryptData)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0xda813c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "TryDecryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::FastCopyBlock)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xda8fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "FastCopyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::FastCopyMac)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xda92d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "FastCopyMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::EncryptionUtility::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xda94c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.LogV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::EncryptionUtility::LogV)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xda9550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "LogV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::EncryptionUtility::__set__masterSecretSeed(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_masterSecretSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::GlobalNamespace::EncryptionUtility::__get__masterSecretSeed()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_masterSecretSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>();
}
 void ::GlobalNamespace::EncryptionUtility::__set__keyExpansionSeed(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_keyExpansionSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::GlobalNamespace::EncryptionUtility::__get__keyExpansionSeed()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_keyExpansionSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>();
}
 void ::GlobalNamespace::EncryptionUtility::__set__tempIV(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_tempIV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::GlobalNamespace::EncryptionUtility::__get__tempIV()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_tempIV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>();
}
 void ::GlobalNamespace::EncryptionUtility::__set__tempHash(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_tempHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::GlobalNamespace::EncryptionUtility::__get__tempHash()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_tempHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>();
}
 void ::GlobalNamespace::EncryptionUtility::__set__aes(::System::Security::Cryptography::AesCryptoServiceProvider value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::AesCryptoServiceProvider, "_aes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>(std::forward<::System::Security::Cryptography::AesCryptoServiceProvider>(value));
}
 ::System::Security::Cryptography::AesCryptoServiceProvider ::GlobalNamespace::EncryptionUtility::__get__aes()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::AesCryptoServiceProvider, "_aes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get>();
}
 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState ::GlobalNamespace::EncryptionUtility::CreateEncryptionState(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "CreateEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState, false>(nullptr, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState> ::GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync(::BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "CreateEncryptionStateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>, false>(nullptr, ___internal_method, taskUtility, preMasterSecret, serverSeed, clientSeed, isClient);
}
 bool ::GlobalNamespace::EncryptionUtility::IsValidLength(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "IsValidLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, length);
}
 void ::GlobalNamespace::EncryptionUtility::EncryptData(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState state, ::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state, data, offset, length, extraPrefixedData);
}
 bool ::GlobalNamespace::EncryptionUtility::TryDecryptData(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState state, ::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "TryDecryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__EncryptionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, data, offset, length);
}
 void ::GlobalNamespace::EncryptionUtility::FastCopyBlock(::ArrayW<uint8_t> inArr, int32_t inOff, ::ArrayW<uint8_t> outArr, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "FastCopyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inArr, inOff, outArr, outOff);
}
 void ::GlobalNamespace::EncryptionUtility::FastCopyMac(::ArrayW<uint8_t> inArr, int32_t inOff, ::ArrayW<uint8_t> outArr, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "FastCopyMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inArr, inOff, outArr, outOff);
}
 void ::GlobalNamespace::EncryptionUtility::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void ::GlobalNamespace::EncryptionUtility::LogV(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility>::get(),
                            "LogV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
} // end anonymous namespace
