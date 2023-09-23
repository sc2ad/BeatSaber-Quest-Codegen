#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/IO/zzzz__FileOptions_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
//  Writing Method size for method: System::IO::System__IO__FileStream__ReadDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__FileStream__ReadDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::IO::System__IO__FileStream__ReadDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23cee7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__FileStream__ReadDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::System__IO__FileStream__ReadDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::System__IO__FileStream__ReadDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23d0a38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::System__IO__FileStream__ReadDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__FileStream__ReadDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::System__IO__FileStream__ReadDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__FileStream__ReadDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23cef54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::System__IO__FileStream__ReadDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__FileStream__ReadDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::System__IO__FileStream__ReadDelegate::*)(System::IAsyncResult)>(&System::IO::System__IO__FileStream__ReadDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cf160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::System__IO__FileStream__ReadDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::IO::System__IO__FileStream__ReadDelegate::System__IO__FileStream__ReadDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__IO__FileStream__ReadDelegate>(object, method))) {}
 void System::IO::System__IO__FileStream__ReadDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 int32_t System::IO::System__IO__FileStream__ReadDelegate::Invoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::IO::System__IO__FileStream__ReadDelegate::BeginInvoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, object);
}
 int32_t System::IO::System__IO__FileStream__ReadDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__ReadDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: System::IO::System__IO__FileStream__WriteDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__FileStream__WriteDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::IO::System__IO__FileStream__WriteDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23cfafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__FileStream__WriteDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__FileStream__WriteDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::System__IO__FileStream__WriteDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23d0a4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::System__IO__FileStream__WriteDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__FileStream__WriteDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::System__IO__FileStream__WriteDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__FileStream__WriteDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23cfbd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::System__IO__FileStream__WriteDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__FileStream__WriteDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__FileStream__WriteDelegate::*)(System::IAsyncResult)>(&System::IO::System__IO__FileStream__WriteDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23cfde4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::System__IO__FileStream__WriteDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::IO::System__IO__FileStream__WriteDelegate::System__IO__FileStream__WriteDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__IO__FileStream__WriteDelegate>(object, method))) {}
 void System::IO::System__IO__FileStream__WriteDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void System::IO::System__IO__FileStream__WriteDelegate::Invoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::IO::System__IO__FileStream__WriteDelegate::BeginInvoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, object);
}
 void System::IO::System__IO__FileStream__WriteDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__FileStream__WriteDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::cordl_internals::intptr_t, System::IO::FileAccess, bool, int32_t)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23cb8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::cordl_internals::intptr_t, System::IO::FileAccess, bool, int32_t, bool, bool)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x23cb8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23cbd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23cc4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23cc504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare, int32_t)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23cc528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare, int32_t, bool)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cc548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare, int32_t, System::IO::FileOptions)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23cc570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare, int32_t, bool, bool)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23cc4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::StringW, System::IO::FileMode, System::IO::FileAccess, System::IO::FileShare, int32_t, bool, System::IO::FileOptions)>(&System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x23cbd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(Microsoft::Win32::SafeHandles::SafeFileHandle, System::IO::FileAccess, bool, int32_t, bool, bool)>(&System::IO::FileStream::Init)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x23cba7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeFileHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileStream::*)()>(&System::IO::FileStream::get_CanRead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23cdda0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileStream::*)()>(&System::IO::FileStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23cddb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileStream::*)()>(&System::IO::FileStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cddc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::FileStream::*)()>(&System::IO::FileStream::get_Length)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23cddd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::FileStream::*)()>(&System::IO::FileStream::get_Position)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x23ce06c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(int64_t)>(&System::IO::FileStream::set_Position)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23ce1dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.get_SafeFileHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::SafeHandles::SafeFileHandle (System::IO::FileStream::*)()>(&System::IO::FileStream::get_SafeFileHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23ce26c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.ExposeHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)()>(&System::IO::FileStream::ExposeHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cdc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ExposeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)()>(&System::IO::FileStream::ReadByte)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23ce420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(uint8_t)>(&System::IO::FileStream::WriteByte)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23ce6c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)(ByRef<::ArrayW<uint8_t>>, int32_t, int32_t)>(&System::IO::FileStream::Read)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x23ce81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.ReadInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::FileStream::ReadInternal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cea84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::FileStream::BeginRead)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x23cebd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)(System::IAsyncResult)>(&System::IO::FileStream::EndRead)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23ceffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::FileStream::Write)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x23cf188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.WriteInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::FileStream::WriteInternal)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23cf3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "WriteInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::FileStream::BeginWrite)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x23cf738;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(System::IAsyncResult)>(&System::IO::FileStream::EndWrite)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x23cfc7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::FileStream::*)(int64_t, System::IO::SeekOrigin)>(&System::IO::FileStream::Seek)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x23cfdf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(int64_t)>(&System::IO::FileStream::SetLength)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x23d0054;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)()>(&System::IO::FileStream::Flush)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23d0394;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)()>(&System::IO::FileStream::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23d040c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(bool)>(&System::IO::FileStream::Dispose)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x23d04b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::FileStream::*)(System::Threading::CancellationToken)>(&System::IO::FileStream::FlushAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23d07e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::IO::FileStream::ReadAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d0870;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::IO::FileStream::WriteAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d0874;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.ReadSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::FileStream::ReadSegment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23ceb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.WriteSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::FileStream::WriteSegment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23cf6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "WriteSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.FlushBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)()>(&System::IO::FileStream::FlushBuffer)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23ce2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "FlushBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.FlushBufferIfDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)()>(&System::IO::FileStream::FlushBufferIfDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23cdf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "FlushBufferIfDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.RefillBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)()>(&System::IO::FileStream::RefillBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23ce690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "RefillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::FileStream::*)(System::Runtime::InteropServices::SafeHandle, ::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::FileStream::ReadData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23ce568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.InitBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileStream::*)(int32_t, bool)>(&System::IO::FileStream::InitBuffer)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x23cd9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "InitBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.GetSecureFileName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileStream::*)(::StringW)>(&System::IO::FileStream::GetSecureFileName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23cd0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "GetSecureFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileStream.GetSecureFileName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileStream::*)(::StringW, bool)>(&System::IO::FileStream::GetSecureFileName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23ccbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "GetSecureFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::IO::FileStream::__set_buf_recycle(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "buf_recycle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::IO::FileStream::__get_buf_recycle()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "buf_recycle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get>();
}
 void System::IO::FileStream::__set_buf_recycle_lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "buf_recycle_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::IO::FileStream::__get_buf_recycle_lock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "buf_recycle_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get>();
}
constexpr void System::IO::FileStream::__set_buf(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::FileStream::__get_buf() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::IO::FileStream::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_safeHandle(Microsoft::Win32::SafeHandles::SafeFileHandle value)  {
::cordl_internals::setInstanceField<Microsoft::Win32::SafeHandles::SafeFileHandle, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Microsoft::Win32::SafeHandles::SafeFileHandle>(value));
}
constexpr Microsoft::Win32::SafeHandles::SafeFileHandle System::IO::FileStream::__get_safeHandle() const {
return ::cordl_internals::getInstanceField<Microsoft::Win32::SafeHandles::SafeFileHandle, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_isExposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::FileStream::__get_isExposed() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_append_startpos(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::IO::FileStream::__get_append_startpos() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_access(System::IO::FileAccess value)  {
::cordl_internals::setInstanceField<System::IO::FileAccess, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::FileAccess>(value));
}
constexpr System::IO::FileAccess System::IO::FileStream::__get_access() const {
return ::cordl_internals::getInstanceField<System::IO::FileAccess, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_owner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::FileStream::__get_owner() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_async(bool value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::FileStream::__get_async() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_canseek(bool value)  {
::cordl_internals::setInstanceField<bool, 0x56>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::FileStream::__get_canseek() const {
return ::cordl_internals::getInstanceField<bool, 0x56>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_anonymous(bool value)  {
::cordl_internals::setInstanceField<bool, 0x57>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::FileStream::__get_anonymous() const {
return ::cordl_internals::getInstanceField<bool, 0x57>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_buf_dirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::FileStream::__get_buf_dirty() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_buf_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::FileStream::__get_buf_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_buf_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::FileStream::__get_buf_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_buf_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::FileStream::__get_buf_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileStream::__set_buf_start(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::IO::FileStream::__get_buf_start() const {
return ::cordl_internals::getInstanceField<int64_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::cordl_internals::intptr_t handle, System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(handle, access, ownsHandle, bufferSize))) {}
 void System::IO::FileStream::_ctor(::cordl_internals::intptr_t handle, System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle, access, ownsHandle, bufferSize);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isConsoleWrapper", ty: "bool", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::cordl_internals::intptr_t handle, System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(handle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper))) {}
 void System::IO::FileStream::_ctor(::cordl_internals::intptr_t handle, System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "System::IO::FileShare", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access, share))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access, share);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access, share, bufferSize))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access, share, bufferSize);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, bool useAsync)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access, share, bufferSize, useAsync))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, bool useAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access, share, bufferSize, useAsync);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::IO::FileOptions", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, System::IO::FileOptions options)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access, share, bufferSize, options))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, System::IO::FileOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access, share, bufferSize, options);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "anonymous", ty: "bool", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access, share, bufferSize, isAsync, anonymous))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access, share, bufferSize, isAsync, anonymous);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "anonymous", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::IO::FileOptions", modifiers: "", def_value: None }]
 System::IO::FileStream::FileStream(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, bool anonymous, System::IO::FileOptions options)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<FileStream>(path, mode, access, share, bufferSize, anonymous, options))) {}
 void System::IO::FileStream::_ctor(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int32_t bufferSize, bool anonymous, System::IO::FileOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileShare>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, mode, access, share, bufferSize, anonymous, options);
}
 void System::IO::FileStream::Init(Microsoft::Win32::SafeHandles::SafeFileHandle safeHandle, System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeFileHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, safeHandle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper);
}
 bool System::IO::FileStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::FileStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::FileStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::FileStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::FileStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Microsoft::Win32::SafeHandles::SafeFileHandle System::IO::FileStream::get_SafeFileHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "get_SafeFileHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Microsoft::Win32::SafeHandles::SafeFileHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::ExposeHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ExposeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::FileStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::WriteByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::IO::FileStream::Read(ByRef<::ArrayW<uint8_t>> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, array, offset, count);
}
 int32_t System::IO::FileStream::ReadInternal(::ArrayW<uint8_t> dest, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, dest, offset, count);
}
 System::IAsyncResult System::IO::FileStream::BeginRead(::ArrayW<uint8_t> array, int32_t offset, int32_t numBytes, System::AsyncCallback userCallback, ::bs_hook::Il2CppWrapperType stateObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, array, offset, numBytes, userCallback, stateObject);
}
 int32_t System::IO::FileStream::EndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void System::IO::FileStream::Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, offset, count);
}
 void System::IO::FileStream::WriteInternal(::ArrayW<uint8_t> src, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "WriteInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, offset, count);
}
 System::IAsyncResult System::IO::FileStream::BeginWrite(::ArrayW<uint8_t> array, int32_t offset, int32_t numBytes, System::AsyncCallback userCallback, ::bs_hook::Il2CppWrapperType stateObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, array, offset, numBytes, userCallback, stateObject);
}
 void System::IO::FileStream::EndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 int64_t System::IO::FileStream::Seek(int64_t offset, System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void System::IO::FileStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::IO::FileStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 System::Threading::Tasks::Task System::IO::FileStream::FlushAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task_1<int32_t> System::IO::FileStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 System::Threading::Tasks::Task System::IO::FileStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 int32_t System::IO::FileStream::ReadSegment(::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, dest, dest_offset, count);
}
 int32_t System::IO::FileStream::WriteSegment(::ArrayW<uint8_t> src, int32_t src_offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "WriteSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, src, src_offset, count);
}
 void System::IO::FileStream::FlushBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "FlushBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::FlushBufferIfDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "FlushBufferIfDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileStream::RefillBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "RefillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::FileStream::ReadData(System::Runtime::InteropServices::SafeHandle safeHandle, ::ArrayW<uint8_t> buf, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, safeHandle, buf, offset, count);
}
 void System::IO::FileStream::InitBuffer(int32_t size, bool isZeroSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "InitBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size, isZeroSize);
}
 ::StringW System::IO::FileStream::GetSecureFileName(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "GetSecureFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, filename);
}
 ::StringW System::IO::FileStream::GetSecureFileName(::StringW filename, bool full)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileStream>::get(),
                            "GetSecureFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, filename, full);
}
