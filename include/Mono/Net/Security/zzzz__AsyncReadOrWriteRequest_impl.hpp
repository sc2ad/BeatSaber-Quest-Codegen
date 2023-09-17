#pragma once
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_impl.hpp"
namespace {
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.get_UserBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::BufferOffsetSize (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&::Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268e104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "get_UserBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.get_CurrentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&::Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268e10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "get_CurrentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.set_CurrentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncReadOrWriteRequest::*)(int32_t)>(&::Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268e114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "set_CurrentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncReadOrWriteRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream, bool, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::AsyncReadOrWriteRequest::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x268e11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&::Mono::Net::Security::AsyncReadOrWriteRequest::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x268e1c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::AsyncReadOrWriteRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void ::Mono::Net::Security::AsyncReadOrWriteRequest::__set__UserBuffer_k__BackingField(::Mono::Net::Security::BufferOffsetSize value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::BufferOffsetSize, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::BufferOffsetSize>(value));
}
constexpr ::Mono::Net::Security::BufferOffsetSize ::Mono::Net::Security::AsyncReadOrWriteRequest::__get__UserBuffer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::BufferOffsetSize, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::AsyncReadOrWriteRequest::__set__CurrentSize_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::AsyncReadOrWriteRequest::__get__CurrentSize_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Mono::Net::Security::BufferOffsetSize ::Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "get_UserBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::BufferOffsetSize, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "get_CurrentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "set_CurrentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "parent", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
 ::Mono::Net::Security::AsyncReadOrWriteRequest::AsyncReadOrWriteRequest(::Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  : ::Mono::Net::Security::AsyncProtocolRequest(THROW_UNLESS(::il2cpp_utils::New<AsyncReadOrWriteRequest>(parent, sync, buffer, offset, size))) {}
 void ::Mono::Net::Security::AsyncReadOrWriteRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, sync, buffer, offset, size);
}
 ::StringW ::Mono::Net::Security::AsyncReadOrWriteRequest::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
