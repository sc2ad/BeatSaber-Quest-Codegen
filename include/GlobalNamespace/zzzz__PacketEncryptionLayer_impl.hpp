#pragma once
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_packetsReceivedPlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsReceivedPlaintext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc2fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsReceivedPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_packetsReceivedEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsReceivedEncrypted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc2fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsReceivedEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_packetsReceivedRejected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsReceivedRejected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc2fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsReceivedRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_packetsSentPlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsSentPlaintext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc2fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsSentPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_packetsSentEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsSentEncrypted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc2fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsSentEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_packetsSentRejected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsSentRejected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc2ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsSentRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_encryptionProcessingTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_encryptionProcessingTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdc3004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_encryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.get_decryptionProcessingTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_decryptionProcessingTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdc3080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_decryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.IncrementPacketsReceivedPlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsReceivedPlaintext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc13fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsReceivedPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.IncrementPacketsReceivedEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsReceivedEncrypted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc13e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsReceivedEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.IncrementPacketsReceivedRejected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsReceivedRejected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc1408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsReceivedRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.IncrementPacketsSentPlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsSentPlaintext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc17ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsSentPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.IncrementPacketsSentEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsSentEncrypted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc1794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsSentEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.IncrementPacketsSentRejected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsSentRejected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc17b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsSentRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.AddEncryptionProcessingTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)(int64_t)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::AddEncryptionProcessingTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc17a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "AddEncryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics.AddDecryptionProcessingTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)(int64_t)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::AddDecryptionProcessingTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc13f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "AddDecryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc0f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__packetsReceivedPlaintext(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__packetsReceivedPlaintext() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__packetsReceivedEncrypted(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__packetsReceivedEncrypted() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__packetsReceivedRejected(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__packetsReceivedRejected() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__packetsSentPlaintext(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__packetsSentPlaintext() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__packetsSentEncrypted(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__packetsSentEncrypted() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__packetsSentRejected(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__packetsSentRejected() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__encryptionProcessingTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__encryptionProcessingTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__set__decryptionProcessingTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::__get__decryptionProcessingTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsReceivedPlaintext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsReceivedPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsReceivedEncrypted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsReceivedEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsReceivedRejected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsReceivedRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsSentPlaintext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsSentPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsSentEncrypted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsSentEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_packetsSentRejected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_packetsSentRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_encryptionProcessingTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_encryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::get_decryptionProcessingTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "get_decryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsReceivedPlaintext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsReceivedPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsReceivedEncrypted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsReceivedEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsReceivedRejected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsReceivedRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsSentPlaintext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsSentPlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsSentEncrypted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsSentEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::IncrementPacketsSentRejected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "IncrementPacketsSentRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::AddEncryptionProcessingTime(int64_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "AddEncryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::AddDecryptionProcessingTime(int64_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            "AddDecryptionProcessingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>())) {}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc3300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0._GetSortedEncryptionStates_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::*)(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::_GetSortedEncryptionStates_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xdc33f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0>::get(),
                            "<GetSortedEncryptionStates>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::__set_port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0>())) {}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0::_GetSortedEncryptionStates_b__0(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0>::get(),
                            "<GetSortedEncryptionStates>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, kvp);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc34cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c._GetSortedEncryptionStates_b__4_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::*)(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::_GetSortedEncryptionStates_b__4_1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xdc34d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get(),
                            "<GetSortedEncryptionStates>b__4_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::__set___9(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>(value));
}
 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::__set___9__4_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, "<>9__4_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::__get___9__4_1()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, "<>9__4_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>())) {}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c::_GetSortedEncryptionStates_b__4_1(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c>::get(),
                            "<GetSortedEncryptionStates>b__4_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, false>(const_cast<void*>(instance), ___internal_method, kvp);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc3370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0._Remove_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::*)(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdc3510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0>::get(),
                            "<Remove>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::__set_encryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::__get_encryptionState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0>())) {}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0::_Remove_b__0(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0>::get(),
                            "<Remove>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, kvp);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.get_isEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::get_isEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdc1db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Dispose)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xdc30fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.GetSortedEncryptionStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::GetSortedEncryptionStates)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xdc2844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "GetSortedEncryptionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.TryGetEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)(int32_t, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::TryGetEncryptionState)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xdc24fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "TryGetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)(int32_t, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Add)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdc3308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdc1d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)(int32_t, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Remove)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xdc2cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdc3378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::__set__pendingStatesByPort(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::__get__pendingStatesByPort() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::GetSortedEncryptionStates(int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "GetSortedEncryptionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, false>(const_cast<void*>(instance), ___internal_method, port);
}
 bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::TryGetEncryptionState(int32_t port, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> encryptionState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "TryGetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, port, encryptionState);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Add(int32_t port, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, port, encryptionState);
}
 bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Remove(int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, port);
}
 bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::Remove(int32_t port, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, port, encryptionState);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>())) {}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xdc3558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdc38b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::PacketEncryptionLayer", modifiers: "", def_value: Some("csnull") }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __t__builder, GlobalNamespace::PacketEncryptionLayer __4__this, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient, System::Net::IPEndPoint endPoint, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->preMasterSecret = preMasterSecret;
this->serverRandom = serverRandom;
this->clientRandom = clientRandom;
this->isClient = isClient;
this->endPoint = endPoint;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set___4__this(GlobalNamespace::PacketEncryptionLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PacketEncryptionLayer, 0x20>(this->__instance, std::forward<GlobalNamespace::PacketEncryptionLayer>(value));
}
constexpr GlobalNamespace::PacketEncryptionLayer GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PacketEncryptionLayer, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set_preMasterSecret(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get_preMasterSecret() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set_serverRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get_serverRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set_clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get_clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set_isClient(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get_isClient() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set_endPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x48>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get_endPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::*)()>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xdc390c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc3d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::PacketEncryptionLayer", modifiers: "", def_value: Some("csnull") }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::PacketEncryptionLayer __4__this, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient, System::Net::IPEndPoint endPoint, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->preMasterSecret = preMasterSecret;
this->serverRandom = serverRandom;
this->clientRandom = clientRandom;
this->isClient = isClient;
this->endPoint = endPoint;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set___4__this(GlobalNamespace::PacketEncryptionLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PacketEncryptionLayer, 0x20>(this->__instance, std::forward<GlobalNamespace::PacketEncryptionLayer>(value));
}
constexpr GlobalNamespace::PacketEncryptionLayer GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PacketEncryptionLayer, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set_preMasterSecret(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get_preMasterSecret() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set_serverRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get_serverRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set_clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get_clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set_isClient(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get_isClient() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set_endPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x48>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get_endPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.get_filterUnencryptedTraffic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::get_filterUnencryptedTraffic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc0dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "get_filterUnencryptedTraffic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.set_filterUnencryptedTraffic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(bool)>(&GlobalNamespace::PacketEncryptionLayer::set_filterUnencryptedTraffic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc0dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "set_filterUnencryptedTraffic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.get_enableStatistics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::get_enableStatistics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc0dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "get_enableStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.set_enableStatistics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(bool)>(&GlobalNamespace::PacketEncryptionLayer::set_enableStatistics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc0ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "set_enableStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility)>(&GlobalNamespace::PacketEncryptionLayer::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xdc0de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.ProcessInboundPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<::ArrayW<uint8_t>>, ByRef<int32_t>, ByRef<int32_t>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xdc0f10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PacketEncryptionLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.ProcessOutBoundPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<::ArrayW<uint8_t>>, ByRef<int32_t>, ByRef<int32_t>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xdc1414;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PacketEncryptionLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.SetUnencryptedTrafficFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::PacketEncryptionLayer::SetUnencryptedTrafficFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc17c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "SetUnencryptedTrafficFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.AddEncryptedEndpoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpoint)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xdc17cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "AddEncryptedEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.AddEncryptedEndpointAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpointAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xdc1934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "AddEncryptedEndpointAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.RemoveEncryptedEndpoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState)>(&GlobalNamespace::PacketEncryptionLayer::RemoveEncryptedEndpoint)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xdc1a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "RemoveEncryptedEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.AddPendingEncryptedEndpointAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&GlobalNamespace::PacketEncryptionLayer::AddPendingEncryptedEndpointAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xdc1e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "AddPendingEncryptedEndpointAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::PollUpdate)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xdc1f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.RemoveAllEndpoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)()>(&GlobalNamespace::PacketEncryptionLayer::RemoveAllEndpoints)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xdc20d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "RemoveAllEndpoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.TryGetEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>)>(&GlobalNamespace::PacketEncryptionLayer::TryGetEncryptionState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xdc2284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "TryGetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.TryGetPendingEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>)>(&GlobalNamespace::PacketEncryptionLayer::TryGetPendingEncryptionState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xdc23a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "TryGetPendingEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.TryGetPotentialPendingEncryptionStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>)>(&GlobalNamespace::PacketEncryptionLayer::TryGetPotentialPendingEncryptionStates)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xdc26e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "TryGetPotentialPendingEncryptionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.PromotePendingEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState)>(&GlobalNamespace::PacketEncryptionLayer::PromotePendingEncryptionState)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xdc2a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "PromotePendingEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.MatchesFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&GlobalNamespace::PacketEncryptionLayer::MatchesFilter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xdc2e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "MatchesFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.ProcessInboundPacketInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<::ArrayW<uint8_t>>, ByRef<int32_t>, ByRef<int32_t>, ByRef<bool>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacketInternal)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xdc10c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "ProcessInboundPacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.ProcessOutBoundPacketInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::*)(System::Net::IPEndPoint, ByRef<::ArrayW<uint8_t>>, ByRef<int32_t>, ByRef<int32_t>, ByRef<bool>)>(&GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacketInternal)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xdc15ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "ProcessOutBoundPacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::PacketEncryptionLayer::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdc2ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PacketEncryptionLayer.LogV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::PacketEncryptionLayer::LogV)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdc2f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "LogV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::PacketEncryptionLayer::__set__stopwatch(System::Diagnostics::Stopwatch value)  {
::cordl_internals::setStaticField<System::Diagnostics::Stopwatch, "_stopwatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get>(std::forward<System::Diagnostics::Stopwatch>(value));
}
 System::Diagnostics::Stopwatch GlobalNamespace::PacketEncryptionLayer::__get__stopwatch()  {
return ::cordl_internals::getStaticField<System::Diagnostics::Stopwatch, "_stopwatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get>();
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set_statistics(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics GlobalNamespace::PacketEncryptionLayer::__get_statistics() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set__taskUtility(BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITaskUtility, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITaskUtility>(value));
}
constexpr BGNet::Core::ITaskUtility GlobalNamespace::PacketEncryptionLayer::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITaskUtility, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set__encryptionStates(GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::PacketEncryptionLayer::__get__encryptionStates() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set__pendingEncryptionStates(GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList> GlobalNamespace::PacketEncryptionLayer::__get__pendingEncryptionStates() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set__unencryptedTrafficFilter(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::PacketEncryptionLayer::__get__unencryptedTrafficFilter() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set__filterUnencryptedTraffic_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PacketEncryptionLayer::__get__filterUnencryptedTraffic_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__set__enableStatistics_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PacketEncryptionLayer::__get__enableStatistics_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::PacketEncryptionLayer::get_filterUnencryptedTraffic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "get_filterUnencryptedTraffic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PacketEncryptionLayer::set_filterUnencryptedTraffic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "set_filterUnencryptedTraffic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::PacketEncryptionLayer::get_enableStatistics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "get_enableStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PacketEncryptionLayer::set_enableStatistics(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "set_enableStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }]
 GlobalNamespace::PacketEncryptionLayer::PacketEncryptionLayer(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility)  : LiteNetLib::Layers::PacketLayerBase(THROW_UNLESS(::il2cpp_utils::New<PacketEncryptionLayer>(timeProvider, taskUtility))) {}
 void GlobalNamespace::PacketEncryptionLayer::_ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, taskUtility);
}
 void GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacket(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "ProcessInboundPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, data, offset, length);
}
 void GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacket(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "ProcessOutBoundPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, data, offset, length);
}
 void GlobalNamespace::PacketEncryptionLayer::SetUnencryptedTrafficFilter(::ArrayW<uint8_t> unencryptedTrafficFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "SetUnencryptedTrafficFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unencryptedTrafficFilter);
}
 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpoint(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "AddEncryptedEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, false>(const_cast<void*>(instance), ___internal_method, endPoint, preMasterSecret, serverRandom, clientRandom, isClient);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpointAsync(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "AddEncryptedEndpointAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, false>(const_cast<void*>(instance), ___internal_method, endPoint, preMasterSecret, serverRandom, clientRandom, isClient);
}
/// @param encryptedState: GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState (default: csnull)
 bool GlobalNamespace::PacketEncryptionLayer::RemoveEncryptedEndpoint(System::Net::IPEndPoint endPoint, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptedState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "RemoveEncryptedEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint, encryptedState);
}
 System::Threading::Tasks::Task GlobalNamespace::PacketEncryptionLayer::AddPendingEncryptedEndpointAsync(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "AddPendingEncryptedEndpointAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, endPoint, preMasterSecret, serverRandom, clientRandom, isClient);
}
 void GlobalNamespace::PacketEncryptionLayer::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PacketEncryptionLayer::RemoveAllEndpoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "RemoveAllEndpoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::PacketEncryptionLayer::TryGetEncryptionState(System::Net::IPEndPoint endPoint, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "TryGetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint, state);
}
 bool GlobalNamespace::PacketEncryptionLayer::TryGetPendingEncryptionState(System::Net::IPEndPoint endPoint, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "TryGetPendingEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint, state);
}
 bool GlobalNamespace::PacketEncryptionLayer::TryGetPotentialPendingEncryptionStates(System::Net::IPEndPoint endPoint, ByRef<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>> encryptionStates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "TryGetPotentialPendingEncryptionStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint, encryptionStates);
}
 void GlobalNamespace::PacketEncryptionLayer::PromotePendingEncryptionState(System::Net::IPEndPoint endPoint, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "PromotePendingEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, state);
}
 bool GlobalNamespace::PacketEncryptionLayer::MatchesFilter(::ArrayW<uint8_t> data, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "MatchesFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data, offset, length);
}
 bool GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacketInternal(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length, ByRef<bool> encrypted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "ProcessInboundPacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, data, offset, length, encrypted);
}
 bool GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacketInternal(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length, ByRef<bool> encrypted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "ProcessOutBoundPacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, data, offset, length, encrypted);
}
 void GlobalNamespace::PacketEncryptionLayer::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void GlobalNamespace::PacketEncryptionLayer::LogV(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketEncryptionLayer>::get(),
                            "LogV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
