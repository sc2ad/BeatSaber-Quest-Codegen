#pragma once
#include "System/Net/zzzz__LazyAsyncResult_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__ContextAwareResult__StateFlags::System__Net__ContextAwareResult__StateFlags(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__ContextAwareResult__StateFlags::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::System__Net__ContextAwareResult__StateFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__ContextAwareResult__StateFlags  System::Net::System__Net__ContextAwareResult__StateFlags::None{0u};
constexpr System::Net::System__Net__ContextAwareResult__StateFlags  System::Net::System__Net__ContextAwareResult__StateFlags::CaptureIdentity{1u};
constexpr System::Net::System__Net__ContextAwareResult__StateFlags  System::Net::System__Net__ContextAwareResult__StateFlags::CaptureContext{2u};
constexpr System::Net::System__Net__ContextAwareResult__StateFlags  System::Net::System__Net__ContextAwareResult__StateFlags::ThreadSafeContextCopy{4u};
constexpr System::Net::System__Net__ContextAwareResult__StateFlags  System::Net::System__Net__ContextAwareResult__StateFlags::PostBlockStarted{8u};
constexpr System::Net::System__Net__ContextAwareResult__StateFlags  System::Net::System__Net__ContextAwareResult__StateFlags::PostBlockFinished{16u};
//  Writing Method size for method: System::Net::System__Net__ContextAwareResult____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__ContextAwareResult____c::*)()>(&System::Net::System__Net__ContextAwareResult____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f6efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__ContextAwareResult____c._Complete_b__17_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__ContextAwareResult____c::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__ContextAwareResult____c::_Complete_b__17_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27f6f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get(),
                            "<Complete>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::System__Net__ContextAwareResult____c::__set___9(System::Net::System__Net__ContextAwareResult____c value)  {
::cordl_internals::setStaticField<System::Net::System__Net__ContextAwareResult____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get>(std::forward<System::Net::System__Net__ContextAwareResult____c>(value));
}
 System::Net::System__Net__ContextAwareResult____c System::Net::System__Net__ContextAwareResult____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Net::System__Net__ContextAwareResult____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get>();
}
 void System::Net::System__Net__ContextAwareResult____c::__set___9__17_0(System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<System::Threading::ContextCallback, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get>(std::forward<System::Threading::ContextCallback>(value));
}
 System::Threading::ContextCallback System::Net::System__Net__ContextAwareResult____c::__get___9__17_0()  {
return ::cordl_internals::getStaticField<System::Threading::ContextCallback, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get>();
}
// Ctor Parameters []
 System::Net::System__Net__ContextAwareResult____c::System__Net__ContextAwareResult____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__ContextAwareResult____c>())) {}
 void System::Net::System__Net__ContextAwareResult____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::System__Net__ContextAwareResult____c::_Complete_b__17_0(::bs_hook::Il2CppWrapperType s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ContextAwareResult____c>::get(),
                            "<Complete>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: System::Net::ContextAwareResult.SafeCaptureIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)()>(&System::Net::ContextAwareResult::SafeCaptureIdentity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27f6154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "SafeCaptureIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.CleanupInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)()>(&System::Net::ContextAwareResult::CleanupInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27f6158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "CleanupInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, System::AsyncCallback)>(&System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f615c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)(bool, bool, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, System::AsyncCallback)>(&System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27f6164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)(bool, bool, bool, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, System::AsyncCallback)>(&System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27f61b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.StartPostingAsyncOp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Net::ContextAwareResult::*)()>(&System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f622c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "StartPostingAsyncOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.StartPostingAsyncOp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Net::ContextAwareResult::*)(bool)>(&System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27f6234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "StartPostingAsyncOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.FinishPostingAsyncOp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ContextAwareResult::*)()>(&System::Net::ContextAwareResult::FinishPostingAsyncOp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27f6400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "FinishPostingAsyncOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)()>(&System::Net::ContextAwareResult::Cleanup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27f681c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ContextAwareResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.CaptureOrComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ContextAwareResult::*)(ByRef<System::Threading::ExecutionContext>, bool)>(&System::Net::ContextAwareResult::CaptureOrComplete)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x27f6444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "CaptureOrComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::ExecutionContext>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)(::cordl_internals::intptr_t)>(&System::Net::ContextAwareResult::Complete)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x27f6ae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ContextAwareResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ContextAwareResult.CompleteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ContextAwareResult::*)()>(&System::Net::ContextAwareResult::CompleteCallback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27f6dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "CompleteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::ContextAwareResult::__set__context(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Net::ContextAwareResult::__get__context() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ContextAwareResult::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::ContextAwareResult::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ContextAwareResult::__set__flags(System::Net::System__Net__ContextAwareResult__StateFlags value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__ContextAwareResult__StateFlags, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__ContextAwareResult__StateFlags>(value));
}
constexpr System::Net::System__Net__ContextAwareResult__StateFlags System::Net::ContextAwareResult::__get__flags() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__ContextAwareResult__StateFlags, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::ContextAwareResult::SafeCaptureIdentity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "SafeCaptureIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::ContextAwareResult::CleanupInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "CleanupInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
 System::Net::ContextAwareResult::ContextAwareResult(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack)  : System::Net::LazyAsyncResult(THROW_UNLESS(::il2cpp_utils::New<ContextAwareResult>(myObject, myState, myCallBack))) {}
 void System::Net::ContextAwareResult::_ctor(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, myObject, myState, myCallBack);
}
// Ctor Parameters [CppParam { name: "captureIdentity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceCaptureContext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
 System::Net::ContextAwareResult::ContextAwareResult(bool captureIdentity, bool forceCaptureContext, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack)  : System::Net::LazyAsyncResult(THROW_UNLESS(::il2cpp_utils::New<ContextAwareResult>(captureIdentity, forceCaptureContext, myObject, myState, myCallBack))) {}
 void System::Net::ContextAwareResult::_ctor(bool captureIdentity, bool forceCaptureContext, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, captureIdentity, forceCaptureContext, myObject, myState, myCallBack);
}
// Ctor Parameters [CppParam { name: "captureIdentity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceCaptureContext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "threadSafeContextCopy", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
 System::Net::ContextAwareResult::ContextAwareResult(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack)  : System::Net::LazyAsyncResult(THROW_UNLESS(::il2cpp_utils::New<ContextAwareResult>(captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack))) {}
 void System::Net::ContextAwareResult::_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack);
}
 ::bs_hook::Il2CppWrapperType System::Net::ContextAwareResult::StartPostingAsyncOp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "StartPostingAsyncOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Net::ContextAwareResult::StartPostingAsyncOp(bool lockCapture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "StartPostingAsyncOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, lockCapture);
}
 bool System::Net::ContextAwareResult::FinishPostingAsyncOp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "FinishPostingAsyncOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::ContextAwareResult::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::ContextAwareResult::CaptureOrComplete(ByRef<System::Threading::ExecutionContext> cachedContext, bool returnContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "CaptureOrComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::ExecutionContext>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cachedContext, returnContext);
}
 void System::Net::ContextAwareResult::Complete(::cordl_internals::intptr_t userToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userToken);
}
 void System::Net::ContextAwareResult::CompleteCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ContextAwareResult>::get(),
                            "CompleteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
