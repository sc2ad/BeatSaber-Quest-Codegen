#pragma once
#include "System/zzzz__IOAsyncResult_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::*)()>(&System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c._Complete_b__27_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::_Complete_b__27_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x276c6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get(),
                            "<Complete>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::__set___9(System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c value)  {
::cordl_internals::setStaticField<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get>(std::forward<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>(value));
}
 System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::__set___9__27_0(System::Threading::WaitCallback value)  {
::cordl_internals::setStaticField<System::Threading::WaitCallback, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get>(std::forward<System::Threading::WaitCallback>(value));
}
 System::Threading::WaitCallback System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::__get___9__27_0()  {
return ::cordl_internals::getStaticField<System::Threading::WaitCallback, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get>();
}
 System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::New_ctor()  {
System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>())};
return o;
}
 void System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c::_Complete_b__27_0(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c>::get(),
                            "<Complete>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::get_Handle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x276c3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(System::Net::Sockets::Socket, System::AsyncCallback, ::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketOperation)>(&System::Net::Sockets::SocketAsyncResult::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x276c40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(System::Net::Sockets::Socket, System::AsyncCallback, ::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketOperation)>(&System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x276c4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.get_ErrorCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::SocketError (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::get_ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x276c4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "get_ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.CheckIfThrowDelayedException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x276c578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "CheckIfThrowDelayedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.CompleteDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::CompleteDisposed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x276c620;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Sockets::SocketAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x27682c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(bool)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276c624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(int32_t)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2768d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(System::Exception, bool)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276c630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(System::Exception)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2767b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(System::Net::Sockets::Socket)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2767b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(System::Net::Sockets::Socket, int32_t)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2767d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::SocketAsyncResult::__set_socket(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::Sockets::SocketAsyncResult::__get_socket() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_operation(System::Net::Sockets::SocketOperation value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SocketOperation, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::SocketOperation>(value));
}
constexpr System::Net::Sockets::SocketOperation System::Net::Sockets::SocketAsyncResult::__get_operation() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SocketOperation, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_DelayedException(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception System::Net::Sockets::SocketAsyncResult::__get_DelayedException() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_EndPoint(System::Net::EndPoint value)  {
::cordl_internals::setInstanceField<System::Net::EndPoint, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::EndPoint>(value));
}
constexpr System::Net::EndPoint System::Net::Sockets::SocketAsyncResult::__get_EndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::EndPoint, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Buffer(System::Memory_1<uint8_t> value)  {
::cordl_internals::setInstanceField<System::Memory_1<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Memory_1<uint8_t>>(value));
}
constexpr System::Memory_1<uint8_t> System::Net::Sockets::SocketAsyncResult::__get_Buffer() const {
return ::cordl_internals::getInstanceField<System::Memory_1<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_Size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_SockFlags(System::Net::Sockets::SocketFlags value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SocketFlags, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::SocketFlags>(value));
}
constexpr System::Net::Sockets::SocketFlags System::Net::Sockets::SocketAsyncResult::__get_SockFlags() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SocketFlags, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_AcceptSocket(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::Sockets::SocketAsyncResult::__get_AcceptSocket() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Addresses(::ArrayW<System::Net::IPAddress> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Net::IPAddress>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Net::IPAddress>>(value));
}
constexpr ::ArrayW<System::Net::IPAddress> System::Net::Sockets::SocketAsyncResult::__get_Addresses() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Net::IPAddress>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_Port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Buffers(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>(value));
}
constexpr System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> System::Net::Sockets::SocketAsyncResult::__get_Buffers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_ReuseSocket(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::SocketAsyncResult::__get_ReuseSocket() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_CurrentAddress(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_CurrentAddress() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_AcceptedSocket(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::Sockets::SocketAsyncResult::__get_AcceptedSocket() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Total(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_Total() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_error(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_error() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_EndCalled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketAsyncResult::__get_EndCalled() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::cordl_internals::intptr_t System::Net::Sockets::SocketAsyncResult::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::SocketAsyncResult System::Net::Sockets::SocketAsyncResult::New_ctor()  {
System::Net::Sockets::SocketAsyncResult o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Sockets::SocketAsyncResult>())};
return o;
}
 void System::Net::Sockets::SocketAsyncResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::SocketAsyncResult::Init(System::Net::Sockets::Socket socket, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, socket, callback, state, operation);
}
 System::Net::Sockets::SocketAsyncResult System::Net::Sockets::SocketAsyncResult::New_ctor(System::Net::Sockets::Socket socket, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation)  {
System::Net::Sockets::SocketAsyncResult o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Sockets::SocketAsyncResult>(socket, callback, state, operation))};
return o;
}
 void System::Net::Sockets::SocketAsyncResult::_ctor(System::Net::Sockets::Socket socket, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, socket, callback, state, operation);
}
 System::Net::Sockets::SocketError System::Net::Sockets::SocketAsyncResult::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "get_ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::SocketError, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "CheckIfThrowDelayedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::SocketAsyncResult::CompleteDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "CompleteDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::SocketAsyncResult::Complete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::SocketAsyncResult::Complete(bool synch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, synch);
}
 void System::Net::Sockets::SocketAsyncResult::Complete(int32_t total)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, total);
}
 void System::Net::Sockets::SocketAsyncResult::Complete(System::Exception e, bool synch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, synch);
}
 void System::Net::Sockets::SocketAsyncResult::Complete(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Net::Sockets::SocketAsyncResult::Complete(System::Net::Sockets::Socket s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void System::Net::Sockets::SocketAsyncResult::Complete(System::Net::Sockets::Socket s, int32_t total)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::SocketAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s, total);
}
