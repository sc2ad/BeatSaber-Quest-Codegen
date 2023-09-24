#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__Error::GlobalNamespace__Interop__Error(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Error::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__Error::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::SUCCESS{0};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::E2BIG{65537};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EACCES{65538};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EADDRINUSE{65539};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EADDRNOTAVAIL{65540};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EAFNOSUPPORT{65541};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EAGAIN{65542};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EALREADY{65543};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EBADF{65544};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EBADMSG{65545};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EBUSY{65546};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ECANCELED{65547};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ECHILD{65548};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ECONNABORTED{65549};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ECONNREFUSED{65550};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ECONNRESET{65551};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EDEADLK{65552};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EDESTADDRREQ{65553};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EDOM{65554};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EDQUOT{65555};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EEXIST{65556};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EFAULT{65557};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EFBIG{65558};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EHOSTUNREACH{65559};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EIDRM{65560};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EILSEQ{65561};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EINPROGRESS{65562};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EINTR{65563};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EINVAL{65564};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EIO{65565};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EISCONN{65566};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EISDIR{65567};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ELOOP{65568};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EMFILE{65569};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EMLINK{65570};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EMSGSIZE{65571};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EMULTIHOP{65572};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENAMETOOLONG{65573};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENETDOWN{65574};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENETRESET{65575};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENETUNREACH{65576};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENFILE{65577};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOBUFS{65578};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENODEV{65580};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOENT{65581};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOEXEC{65582};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOLCK{65583};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOLINK{65584};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOMEM{65585};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOMSG{65586};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOPROTOOPT{65587};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOSPC{65588};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOSYS{65591};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOTCONN{65592};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOTDIR{65593};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOTEMPTY{65594};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOTSOCK{65596};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOTSUP{65597};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENOTTY{65598};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENXIO{65599};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EOVERFLOW{65600};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EPERM{65602};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EPIPE{65603};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EPROTO{65604};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EPROTONOSUPPORT{65605};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EPROTOTYPE{65606};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ERANGE{65607};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EROFS{65608};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ESPIPE{65609};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ESRCH{65610};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ESTALE{65611};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ETIMEDOUT{65613};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ETXTBSY{65614};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EXDEV{65615};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ESOCKTNOSUPPORT{65630};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EPFNOSUPPORT{65632};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ESHUTDOWN{65644};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EHOSTDOWN{65648};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::ENODATA{65649};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EOPNOTSUPP{65597};
constexpr GlobalNamespace::GlobalNamespace__Interop__Error  GlobalNamespace::GlobalNamespace__Interop__Error::EWOULDBLOCK{65542};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__ErrorInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22a39e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__ErrorInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::*)(GlobalNamespace::GlobalNamespace__Interop__Error)>(&GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22a3a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__Error>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__ErrorInfo.get_Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__Interop__Error (GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::*)()>(&GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__ErrorInfo.get_RawErrno
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::*)()>(&GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::get_RawErrno)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22a38ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "get_RawErrno",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__ErrorInfo.GetErrorMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::*)()>(&GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::GetErrorMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22a3918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "GetErrorMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__ErrorInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::*)()>(&GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22a3bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_error", ty: "GlobalNamespace::GlobalNamespace__Interop__Error", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::GlobalNamespace__Interop__ErrorInfo(GlobalNamespace::GlobalNamespace__Interop__Error _error, int32_t _rawErrno) noexcept : ::bs_hook::ValueTypeWrapper() {this->_error = _error;
this->_rawErrno = _rawErrno;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::__set__error(GlobalNamespace::GlobalNamespace__Interop__Error value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__Interop__Error, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__Interop__Error>(value));
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Error GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::__get__error() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__Interop__Error, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::__set__rawErrno(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::__get__rawErrno() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::_ctor(int32_t errno)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, errno);
}
 void GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::_ctor(GlobalNamespace::GlobalNamespace__Interop__Error error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__Error>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, error);
}
 GlobalNamespace::GlobalNamespace__Interop__Error GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__Interop__Error, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::get_RawErrno()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "get_RawErrno",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::GetErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "GetErrorMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__Interop__ErrorInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::GlobalNamespace__Interop__Sys__NodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_UNKNOWN{0};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_FIFO{1};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_CHR{2};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_DIR{4};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_BLK{6};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_REG{8};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_LNK{10};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_SOCK{12};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType  GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType::DT_WHT{14};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry.GetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ReadOnlySpan_1<char16_t> (GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::*)(System::Span_1<char16_t>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::GetName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x22a45ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Name", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InodeType", ty: "GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::GlobalNamespace__Interop__Sys__DirectoryEntry(void* Name, int32_t NameLength, GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType InodeType) noexcept : ::bs_hook::ValueTypeWrapper() {this->Name = Name;
this->NameLength = NameLength;
this->InodeType = InodeType;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::__set_Name(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::__get_Name() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::__set_NameLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::__get_NameLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::__set_InodeType(GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType, 0xc>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::__get_InodeType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType, 0xc>(this->__instance);
}
 System::ReadOnlySpan_1<char16_t> GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry::GetName(System::Span_1<char16_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ReadOnlySpan_1<char16_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "Flags", ty: "GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "Mode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ATimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BirthTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Dev", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Ino", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::GlobalNamespace__Interop__Sys__FileStatus(GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags Flags, int32_t Mode, uint32_t Uid, uint32_t Gid, int64_t Size, int64_t ATime, int64_t ATimeNsec, int64_t MTime, int64_t MTimeNsec, int64_t CTime, int64_t CTimeNsec, int64_t BirthTime, int64_t BirthTimeNsec, int64_t Dev, int64_t Ino, uint32_t UserFlags) noexcept : ::bs_hook::ValueTypeWrapper() {this->Flags = Flags;
this->Mode = Mode;
this->Uid = Uid;
this->Gid = Gid;
this->Size = Size;
this->ATime = ATime;
this->ATimeNsec = ATimeNsec;
this->MTime = MTime;
this->MTimeNsec = MTimeNsec;
this->CTime = CTime;
this->CTimeNsec = CTimeNsec;
this->BirthTime = BirthTime;
this->BirthTimeNsec = BirthTimeNsec;
this->Dev = Dev;
this->Ino = Ino;
this->UserFlags = UserFlags;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Flags(GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags>(value));
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Flags() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Mode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Mode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Uid(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Uid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Gid(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Gid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Size(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Size() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_ATime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_ATime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_ATimeNsec(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_ATimeNsec() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_MTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_MTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_MTimeNsec(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_MTimeNsec() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_CTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_CTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_CTimeNsec(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_CTimeNsec() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_BirthTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_BirthTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_BirthTimeNsec(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_BirthTimeNsec() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Dev(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Dev() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_Ino(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x60>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_Ino() const {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__set_UserFlags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x68>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus::__get_UserFlags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x68>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags::GlobalNamespace__Interop__Sys__FileStatusFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags  GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags::None{0};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags  GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags::HasBirthTime{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::GlobalNamespace__Interop__Sys__Permissions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::Mask{511};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IRWXU{448};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IRUSR{256};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IWUSR{128};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IXUSR{64};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IRWXG{56};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IRGRP{32};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IWGRP{16};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IXGRP{8};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IRWXO{7};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IROTH{4};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IWOTH{2};
constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions  GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions::S_IXOTH{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.GetLastErrorInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo (*)()>(&GlobalNamespace::GlobalNamespace__Interop__Sys::GetLastErrorInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22a3728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetLastErrorInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.StrError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::StrError)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22a3ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "StrError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.ConvertErrorPlatformToPal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__Interop__Error (*)(int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::ConvertErrorPlatformToPal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a3a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ConvertErrorPlatformToPal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.ConvertErrorPalToPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(GlobalNamespace::GlobalNamespace__Interop__Error)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::ConvertErrorPalToPlatform)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22a3a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ConvertErrorPalToPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__Error>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.StrErrorR
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int32_t, void*, int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::StrErrorR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a3cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "StrErrorR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.GetNonCryptographicallySecureRandomBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::GetNonCryptographicallySecureRandomBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a39e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetNonCryptographicallySecureRandomBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.OpenDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::OpenDir)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22a3cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "OpenDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.GetReadDirRBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&GlobalNamespace::GlobalNamespace__Interop__Sys::GetReadDirRBufferSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a3ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetReadDirRBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.ReadDirR
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::ReadDirR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a3cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ReadDirR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.CloseDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::CloseDir)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a3cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "CloseDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.ReadLink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::ReadLink)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22a3d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ReadLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.ReadLink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::ReadLink)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x22a3d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ReadLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Stat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Stat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22a3f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Stat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.LStat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::LStat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22a3fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Symlink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Symlink)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22a3fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Symlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.CopyFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Microsoft::Win32::SafeHandles::SafeFileHandle, Microsoft::Win32::SafeHandles::SafeFileHandle)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::CopyFile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22a40a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "CopyFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeFileHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeFileHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.GetEGid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&GlobalNamespace::GlobalNamespace__Interop__Sys::GetEGid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a4154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetEGid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.GetEUid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&GlobalNamespace::GlobalNamespace__Interop__Sys::GetEUid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a4158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetEUid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.LChflagsCanSetHiddenFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&GlobalNamespace::GlobalNamespace__Interop__Sys::LChflagsCanSetHiddenFlag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LChflagsCanSetHiddenFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Link
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Link)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22a4160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Link",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.MkDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::MkDir)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22a41b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "MkDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Rename
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Rename)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22a41f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Rename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.RmDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::RmDir)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22a4244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "RmDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Stat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<uint8_t>, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Stat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a4278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Stat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Stat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::ReadOnlySpan_1<char16_t>, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Stat)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x22a4294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Stat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.LStat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<uint8_t>, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::LStat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a43ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.LStat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::ReadOnlySpan_1<char16_t>, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::LStat)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x22a4408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.Unlink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::Unlink)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22a4560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Unlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__Interop__Sys.DoubleToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(double_t, void*, void*, int32_t)>(&GlobalNamespace::GlobalNamespace__Interop__Sys::DoubleToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a4594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "DoubleToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__Interop__Sys::__set_CanSetHiddenFlag(bool value)  {
::cordl_internals::setStaticField<bool, "CanSetHiddenFlag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get>(std::forward<bool>(value));
}
 bool GlobalNamespace::GlobalNamespace__Interop__Sys::__get_CanSetHiddenFlag()  {
return ::cordl_internals::getStaticField<bool, "CanSetHiddenFlag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get>();
}
 GlobalNamespace::GlobalNamespace__Interop__ErrorInfo GlobalNamespace::GlobalNamespace__Interop__Sys::GetLastErrorInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetLastErrorInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo, false>(nullptr, ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__Interop__Sys::StrError(int32_t platformErrno)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "StrError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platformErrno);
}
 GlobalNamespace::GlobalNamespace__Interop__Error GlobalNamespace::GlobalNamespace__Interop__Sys::ConvertErrorPlatformToPal(int32_t platformErrno)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ConvertErrorPlatformToPal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__Interop__Error, false>(nullptr, ___internal_method, platformErrno);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::ConvertErrorPalToPlatform(GlobalNamespace::GlobalNamespace__Interop__Error error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ConvertErrorPalToPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__Error>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, error);
}
 void* GlobalNamespace::GlobalNamespace__Interop__Sys::StrErrorR(int32_t platformErrno, void* buffer, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "StrErrorR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, platformErrno, buffer, bufferSize);
}
 void GlobalNamespace::GlobalNamespace__Interop__Sys::GetNonCryptographicallySecureRandomBytes(void* buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetNonCryptographicallySecureRandomBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, length);
}
 ::cordl_internals::intptr_t GlobalNamespace::GlobalNamespace__Interop__Sys::OpenDir(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "OpenDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, path);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::GetReadDirRBufferSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetReadDirRBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::ReadDirR(::cordl_internals::intptr_t dir, void* buffer, int32_t bufferSize, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry> outputEntry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ReadDirR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dir, buffer, bufferSize, outputEntry);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::CloseDir(::cordl_internals::intptr_t dir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "CloseDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dir);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::ReadLink(::StringW path, ::ArrayW<uint8_t> buffer, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ReadLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, buffer, bufferSize);
}
 ::StringW GlobalNamespace::GlobalNamespace__Interop__Sys::ReadLink(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "ReadLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Stat(::StringW path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Stat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::LStat(::StringW path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Symlink(::StringW target, ::StringW linkPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Symlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, target, linkPath);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::CopyFile(Microsoft::Win32::SafeHandles::SafeFileHandle source, Microsoft::Win32::SafeHandles::SafeFileHandle destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "CopyFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeFileHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeFileHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, destination);
}
 uint32_t GlobalNamespace::GlobalNamespace__Interop__Sys::GetEGid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetEGid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
 uint32_t GlobalNamespace::GlobalNamespace__Interop__Sys::GetEUid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "GetEUid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::LChflagsCanSetHiddenFlag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LChflagsCanSetHiddenFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Link(::StringW source, ::StringW link)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Link",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, link);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::MkDir(::StringW path, int32_t mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "MkDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, mode);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Rename(::StringW oldPath, ::StringW newPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Rename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oldPath, newPath);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::RmDir(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "RmDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Stat(ByRef<uint8_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Stat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Stat(System::ReadOnlySpan_1<char16_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Stat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::LStat(ByRef<uint8_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::LStat(System::ReadOnlySpan_1<char16_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "LStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::Unlink(::StringW pathname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "Unlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pathname);
}
 int32_t GlobalNamespace::GlobalNamespace__Interop__Sys::DoubleToString(double_t value, void* format, void* buffer, int32_t bufferLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__Interop__Sys>::get(),
                            "DoubleToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, format, buffer, bufferLength);
}
//  Writing Method size for method: GlobalNamespace::Interop.ThrowExceptionForIoErrno
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo, ::StringW, bool, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>)>(&GlobalNamespace::Interop::ThrowExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22a3160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "ThrowExceptionForIoErrno",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Interop.CheckIo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, ::StringW, bool, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>)>(&GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22a36b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "CheckIo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Interop.CheckIo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::StringW, bool, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>)>(&GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22a3790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "CheckIo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Interop.GetExceptionForIoErrno
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo, ::StringW, bool)>(&GlobalNamespace::Interop::GetExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x22a31b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "GetExceptionForIoErrno",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Interop.GetIOException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo)>(&GlobalNamespace::Interop::GetIOException)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22a3820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "GetIOException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Interop.GetRandomBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, int32_t)>(&GlobalNamespace::Interop::GetRandomBytes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22a397c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "GetRandomBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::Interop::ThrowExceptionForIoErrno(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorRewriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "ThrowExceptionForIoErrno",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, errorInfo, path, isDirectory, errorRewriter);
}
/// @param path: ::StringW (default: csnull)
/// @param isDirectory: bool (default: false)
/// @param errorRewriter: System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> (default: csnull)
 int64_t GlobalNamespace::Interop::CheckIo(int64_t result, ::StringW path, bool isDirectory, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorRewriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "CheckIo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
/// @param path: ::StringW (default: csnull)
/// @param isDirectory: bool (default: false)
/// @param errorRewriter: System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> (default: csnull)
 int32_t GlobalNamespace::Interop::CheckIo(int32_t result, ::StringW path, bool isDirectory, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorRewriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "CheckIo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
/// @param path: ::StringW (default: csnull)
/// @param isDirectory: bool (default: false)
 System::Exception GlobalNamespace::Interop::GetExceptionForIoErrno(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "GetExceptionForIoErrno",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, errorInfo, path, isDirectory);
}
 System::Exception GlobalNamespace::Interop::GetIOException(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo errorInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "GetIOException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, errorInfo);
}
 void GlobalNamespace::Interop::GetRandomBytes(void* buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interop>::get(),
                            "GetRandomBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, length);
}
