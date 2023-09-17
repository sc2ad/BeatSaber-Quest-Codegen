#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ServerCertificateRequest_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)(int32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xde32a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xde398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xde3990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.System_Collections_Generic_IEnumerator_System_Byte[]__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerator_System_Byte[]__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.Generic.IEnumerator<System.Byte[]>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde3a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.System_Collections_Generic_IEnumerable_System_Byte[]__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>> (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerable_System_Byte[]__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xde3a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.Generic.IEnumerable<System.Byte[]>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xde3b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::operator System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>>
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::operator System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__set___2__current(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__get___2__current() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__set___4__this(BGNet::Core::Messages::ServerCertificateRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::ServerCertificateRequest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::ServerCertificateRequest>(value));
}
constexpr BGNet::Core::Messages::ServerCertificateRequest BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::ServerCertificateRequest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__set__i_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>(__1__state))) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerator_System_Byte[]__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.Generic.IEnumerator<System.Byte[]>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_Generic_IEnumerable_System_Byte[]__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.Generic.IEnumerable<System.Byte[]>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerCertificateRequest> (*)()>(&BGNet::Core::Messages::ServerCertificateRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde00ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest.get_certificateList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>> (BGNet::Core::Messages::ServerCertificateRequest::*)()>(&BGNet::Core::Messages::ServerCertificateRequest::get_certificateList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xdddb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "get_certificateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::ServerCertificateRequest (BGNet::Core::Messages::ServerCertificateRequest::*)(System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>)>(&BGNet::Core::Messages::ServerCertificateRequest::Init)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xde1b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::ServerCertificateRequest::Serialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xde32d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ServerCertificateRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::ServerCertificateRequest::Deserialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xde3358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ServerCertificateRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)()>(&BGNet::Core::Messages::ServerCertificateRequest::Release)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xde349c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ServerCertificateRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerCertificateRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)()>(&BGNet::Core::Messages::ServerCertificateRequest::_ctor)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xde353c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeServerToClientMessage
constexpr  BGNet::Core::Messages::ServerCertificateRequest::operator BGNet::Core::Messages::IHandshakeServerToClientMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeServerToClientMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr  BGNet::Core::Messages::ServerCertificateRequest::operator BGNet::Core::Messages::IHandshakeMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::ServerCertificateRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::ServerCertificateRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::ServerCertificateRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ServerCertificateRequest::__set__certificateList(::ArrayW<GlobalNamespace::ByteArrayNetSerializable> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::ByteArrayNetSerializable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::ByteArrayNetSerializable>>(value));
}
constexpr ::ArrayW<GlobalNamespace::ByteArrayNetSerializable> BGNet::Core::Messages::ServerCertificateRequest::__get__certificateList() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::ByteArrayNetSerializable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ServerCertificateRequest::__set__certificateCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::ServerCertificateRequest::__get__certificateCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerCertificateRequest> BGNet::Core::Messages::ServerCertificateRequest::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerCertificateRequest>, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>> BGNet::Core::Messages::ServerCertificateRequest::get_certificateList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "get_certificateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method);
}
 BGNet::Core::Messages::ServerCertificateRequest BGNet::Core::Messages::ServerCertificateRequest::Init(System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>> certificateList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::ServerCertificateRequest, false>(const_cast<void*>(instance), ___internal_method, certificateList);
}
 void BGNet::Core::Messages::ServerCertificateRequest::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::ServerCertificateRequest::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::ServerCertificateRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::ServerCertificateRequest::ServerCertificateRequest()  : BGNet::Core::Messages::BaseReliableResponse(THROW_UNLESS(::il2cpp_utils::New<ServerCertificateRequest>())) {}
 void BGNet::Core::Messages::ServerCertificateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerCertificateRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
