#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IllogicalCallContext_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::____System__Threading__ExecutionContext__Flags::____System__Threading__ExecutionContext__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::____System__Threading__ExecutionContext__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::____System__Threading__ExecutionContext__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::____System__Threading__ExecutionContext__Flags  ::System::Threading::____System__Threading__ExecutionContext__Flags::None{0};
constexpr ::System::Threading::____System__Threading__ExecutionContext__Flags  ::System::Threading::____System__Threading__ExecutionContext__Flags::IsNewCapture{1};
constexpr ::System::Threading::____System__Threading__ExecutionContext__Flags  ::System::Threading::____System__Threading__ExecutionContext__Flags::IsFlowSuppressed{2};
constexpr ::System::Threading::____System__Threading__ExecutionContext__Flags  ::System::Threading::____System__Threading__ExecutionContext__Flags::IsPreAllocatedDefault{4};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ExecutionContext__Reader::*)(::System::Threading::ExecutionContext)>(&::System::Threading::____System__Threading__ExecutionContext__Reader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aaf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.DangerousGetRawExecutionContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext (::System::Threading::____System__Threading__ExecutionContext__Reader::*)()>(&::System::Threading::____System__Threading__ExecutionContext__Reader::DangerousGetRawExecutionContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aaf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "DangerousGetRawExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.get_IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::____System__Threading__ExecutionContext__Reader::*)()>(&::System::Threading::____System__Threading__ExecutionContext__Reader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24aa4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.IsDefaultFTContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::____System__Threading__ExecutionContext__Reader::*)(bool)>(&::System::Threading::____System__Threading__ExecutionContext__Reader::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24aa508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "IsDefaultFTContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.get_IsFlowSuppressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::____System__Threading__ExecutionContext__Reader::*)()>(&::System::Threading::____System__Threading__ExecutionContext__Reader::get_IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24aaf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_IsFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.get_SynchronizationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext (::System::Threading::____System__Threading__ExecutionContext__Reader::*)()>(&::System::Threading::____System__Threading__ExecutionContext__Reader::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24aa7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_SynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.get_SynchronizationContextNoFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext (::System::Threading::____System__Threading__ExecutionContext__Reader::*)()>(&::System::Threading::____System__Threading__ExecutionContext__Reader::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24aa7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_SynchronizationContextNoFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.get_LogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader (::System::Threading::____System__Threading__ExecutionContext__Reader::*)()>(&::System::Threading::____System__Threading__ExecutionContext__Reader::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24aac50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ExecutionContext__Reader.HasSameLocalValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::____System__Threading__ExecutionContext__Reader::*)(::System::Threading::ExecutionContext)>(&::System::Threading::____System__Threading__ExecutionContext__Reader::HasSameLocalValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24aa574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "HasSameLocalValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Threading::____System__Threading__ExecutionContext__Reader::____System__Threading__ExecutionContext__Reader(::System::Threading::ExecutionContext m_ec) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ec = m_ec;
}
constexpr void ::System::Threading::____System__Threading__ExecutionContext__Reader::__set_m_ec(::System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext, 0x0>(this->__instance, std::forward<::System::Threading::ExecutionContext>(value));
}
constexpr ::System::Threading::ExecutionContext ::System::Threading::____System__Threading__ExecutionContext__Reader::__get_m_ec() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext, 0x0>(this->__instance);
}
 void ::System::Threading::____System__Threading__ExecutionContext__Reader::_ctor(::System::Threading::ExecutionContext ec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ec);
}
 ::System::Threading::ExecutionContext ::System::Threading::____System__Threading__ExecutionContext__Reader::DangerousGetRawExecutionContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "DangerousGetRawExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Threading::____System__Threading__ExecutionContext__Reader::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Threading::____System__Threading__ExecutionContext__Reader::IsDefaultFTContext(bool ignoreSyncCtx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "IsDefaultFTContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ignoreSyncCtx);
}
 bool ::System::Threading::____System__Threading__ExecutionContext__Reader::get_IsFlowSuppressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_IsFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Threading::SynchronizationContext ::System::Threading::____System__Threading__ExecutionContext__Reader::get_SynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_SynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Threading::SynchronizationContext ::System::Threading::____System__Threading__ExecutionContext__Reader::get_SynchronizationContextNoFlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_SynchronizationContextNoFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader ::System::Threading::____System__Threading__ExecutionContext__Reader::get_LogicalCallContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "get_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Threading::____System__Threading__ExecutionContext__Reader::HasSameLocalValues(::System::Threading::ExecutionContext other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ExecutionContext__Reader>::get(),
                            "HasSameLocalValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions::____System__Threading__ExecutionContext__CaptureOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions  ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions::None{0};
constexpr ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions  ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions::IgnoreSyncCtx{1};
constexpr ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions  ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions::OptimizeDefaultCase{2};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_isNewCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_isNewCapture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24a9d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_isNewCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_isNewCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::set_isNewCapture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24a9d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_isNewCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_isFlowSuppressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_isFlowSuppressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a9d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_isFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_isFlowSuppressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::set_isFlowSuppressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24a9d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_isFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_IsPreAllocatedDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_IsPreAllocatedDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a9d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_IsPreAllocatedDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a9d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24a9d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.SetLocalValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::IAsyncLocal, ::bs_hook::Il2CppWrapperType, bool)>(&::System::Threading::ExecutionContext::SetLocalValue)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x24a9da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "SetLocalValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IAsyncLocal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.OnAsyncLocalContextChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext, ::System::Threading::ExecutionContext)>(&::System::Threading::ExecutionContext::OnAsyncLocalContextChanged)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x24a9880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "OnAsyncLocalContextChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_LogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24aa0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_LogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext)>(&::System::Threading::ExecutionContext::set_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aa164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_IllogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IllogicalCallContext (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_IllogicalCallContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24aa16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_IllogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_IllogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Remoting::Messaging::IllogicalCallContext)>(&::System::Threading::ExecutionContext::set_IllogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aa1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_IllogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IllogicalCallContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_SynchronizationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aa1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_SynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_SynchronizationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Threading::SynchronizationContext)>(&::System::Threading::ExecutionContext::set_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aa1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_SynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_SynchronizationContextNoFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aa1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_SynchronizationContextNoFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_SynchronizationContextNoFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Threading::SynchronizationContext)>(&::System::Threading::ExecutionContext::set_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aa1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_SynchronizationContextNoFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24aa200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext, ::System::Threading::ContextCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Threading::ExecutionContext::Run)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24a6af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext, ::System::Threading::ContextCallback, ::bs_hook::Il2CppWrapperType, bool)>(&::System::Threading::ExecutionContext::Run)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24aa204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.RunInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext, ::System::Threading::ContextCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Threading::ExecutionContext::RunInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24aa488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "RunInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.RunInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext, ::System::Threading::ContextCallback, ::bs_hook::Il2CppWrapperType, bool)>(&::System::Threading::ExecutionContext::RunInternal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x24aa280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "RunInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.EstablishCopyOnWriteScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Threading::ExecutionContextSwitcher>)>(&::System::Threading::ExecutionContext::EstablishCopyOnWriteScope)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24aa740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "EstablishCopyOnWriteScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.EstablishCopyOnWriteScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Thread, bool, ByRef<::System::Threading::ExecutionContextSwitcher>)>(&::System::Threading::ExecutionContext::EstablishCopyOnWriteScope)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24aa59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "EstablishCopyOnWriteScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.SetExecutionContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContextSwitcher (*)(::System::Threading::ExecutionContext, bool)>(&::System::Threading::ExecutionContext::SetExecutionContext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x24aa5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "SetExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.CreateCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::CreateCopy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x24aa828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "CreateCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.CreateMutableCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::CreateMutableCopy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x24aa968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "CreateMutableCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.IsFlowSuppressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::ExecutionContext::IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24aaa60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "IsFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Capture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext (*)()>(&::System::Threading::ExecutionContext::Capture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24a32c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.FastCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext (*)()>(&::System::Threading::ExecutionContext::FastCapture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24aac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "FastCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Capture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext (*)(ByRef<::System::Threading::StackCrawlMark>, ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions)>(&::System::Threading::ExecutionContext::Capture)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x24aaa90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__ExecutionContext__CaptureOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::ExecutionContext::GetObjectData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24aac68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24aad78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.IsDefaultFTContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24aa524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "IsDefaultFTContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Threading::ExecutionContext::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Threading::ExecutionContext::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__syncContext(::System::Threading::SynchronizationContext value)  {
::cordl_internals::setInstanceField<::System::Threading::SynchronizationContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::SynchronizationContext>(value));
}
constexpr ::System::Threading::SynchronizationContext ::System::Threading::ExecutionContext::__get__syncContext() const {
return ::cordl_internals::getInstanceField<::System::Threading::SynchronizationContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__syncContextNoFlow(::System::Threading::SynchronizationContext value)  {
::cordl_internals::setInstanceField<::System::Threading::SynchronizationContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::SynchronizationContext>(value));
}
constexpr ::System::Threading::SynchronizationContext ::System::Threading::ExecutionContext::__get__syncContextNoFlow() const {
return ::cordl_internals::getInstanceField<::System::Threading::SynchronizationContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::LogicalCallContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::LogicalCallContext>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext ::System::Threading::ExecutionContext::__get__logicalCallContext() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::LogicalCallContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IllogicalCallContext, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::IllogicalCallContext>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext ::System::Threading::ExecutionContext::__get__illogicalCallContext() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IllogicalCallContext, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__flags(::System::Threading::____System__Threading__ExecutionContext__Flags value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__ExecutionContext__Flags, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__ExecutionContext__Flags>(value));
}
constexpr ::System::Threading::____System__Threading__ExecutionContext__Flags ::System::Threading::ExecutionContext::__get__flags() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__ExecutionContext__Flags, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType> ::System::Threading::ExecutionContext::__get__localValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal,::bs_hook::Il2CppWrapperType>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ExecutionContext::__set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal>>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal> ::System::Threading::ExecutionContext::__get__localChangeNotifications() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Threading::ExecutionContext::__set_s_dummyDefaultEC(::System::Threading::ExecutionContext value)  {
::cordl_internals::setStaticField<::System::Threading::ExecutionContext, "s_dummyDefaultEC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get>(std::forward<::System::Threading::ExecutionContext>(value));
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::__get_s_dummyDefaultEC()  {
return ::cordl_internals::getStaticField<::System::Threading::ExecutionContext, "s_dummyDefaultEC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get>();
}
 void ::System::Threading::ExecutionContext::__set_Default(::System::Threading::ExecutionContext value)  {
::cordl_internals::setStaticField<::System::Threading::ExecutionContext, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get>(std::forward<::System::Threading::ExecutionContext>(value));
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::__get_Default()  {
return ::cordl_internals::getStaticField<::System::Threading::ExecutionContext, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get>();
}
 bool ::System::Threading::ExecutionContext::get_isNewCapture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_isNewCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::set_isNewCapture(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_isNewCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Threading::ExecutionContext::get_isFlowSuppressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_isFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::set_isFlowSuppressed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_isFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Threading::ExecutionContext::get_IsPreAllocatedDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_IsPreAllocatedDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Threading::ExecutionContext::ExecutionContext()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ExecutionContext>())) {}
 void ::System::Threading::ExecutionContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "isPreAllocatedDefault", ty: "bool", modifiers: "", def_value: None }]
 ::System::Threading::ExecutionContext::ExecutionContext(bool isPreAllocatedDefault)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ExecutionContext>(isPreAllocatedDefault))) {}
 void ::System::Threading::ExecutionContext::_ctor(bool isPreAllocatedDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isPreAllocatedDefault);
}
 void ::System::Threading::ExecutionContext::SetLocalValue(::System::Threading::IAsyncLocal local, ::bs_hook::Il2CppWrapperType newValue, bool needChangeNotifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "SetLocalValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IAsyncLocal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, local, newValue, needChangeNotifications);
}
 void ::System::Threading::ExecutionContext::OnAsyncLocalContextChanged(::System::Threading::ExecutionContext previous, ::System::Threading::ExecutionContext current)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "OnAsyncLocalContextChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previous, current);
}
 ::System::Runtime::Remoting::Messaging::LogicalCallContext ::System::Threading::ExecutionContext::get_LogicalCallContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Runtime::Remoting::Messaging::IllogicalCallContext ::System::Threading::ExecutionContext::get_IllogicalCallContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_IllogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IllogicalCallContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_IllogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IllogicalCallContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Threading::SynchronizationContext ::System::Threading::ExecutionContext::get_SynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_SynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::set_SynchronizationContext(::System::Threading::SynchronizationContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_SynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Threading::SynchronizationContext ::System::Threading::ExecutionContext::get_SynchronizationContextNoFlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "get_SynchronizationContextNoFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "set_SynchronizationContextNoFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Threading::ExecutionContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ExecutionContext::Run(::System::Threading::ExecutionContext executionContext, ::System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state);
}
 void ::System::Threading::ExecutionContext::Run(::System::Threading::ExecutionContext executionContext, ::System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state, bool preserveSyncCtx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
 void ::System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext executionContext, ::System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "RunInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state);
}
 void ::System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext executionContext, ::System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state, bool preserveSyncCtx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "RunInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
 void ::System::Threading::ExecutionContext::EstablishCopyOnWriteScope(ByRef<::System::Threading::ExecutionContextSwitcher> ecsw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "EstablishCopyOnWriteScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ecsw);
}
 void ::System::Threading::ExecutionContext::EstablishCopyOnWriteScope(::System::Threading::Thread currentThread, bool knownNullWindowsIdentity, ByRef<::System::Threading::ExecutionContextSwitcher> ecsw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "EstablishCopyOnWriteScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, currentThread, knownNullWindowsIdentity, ecsw);
}
 ::System::Threading::ExecutionContextSwitcher ::System::Threading::ExecutionContext::SetExecutionContext(::System::Threading::ExecutionContext executionContext, bool preserveSyncCtx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "SetExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContextSwitcher, false>(nullptr, ___internal_method, executionContext, preserveSyncCtx);
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::CreateCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "CreateCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::CreateMutableCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "CreateMutableCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Threading::ExecutionContext::IsFlowSuppressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "IsFlowSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::Capture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext, false>(nullptr, ___internal_method);
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::FastCapture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "FastCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext, false>(nullptr, ___internal_method);
}
 ::System::Threading::ExecutionContext ::System::Threading::ExecutionContext::Capture(ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Threading::____System__Threading__ExecutionContext__CaptureOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__ExecutionContext__CaptureOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext, false>(nullptr, ___internal_method, stackMark, options);
}
 void ::System::Threading::ExecutionContext::GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Threading::ExecutionContext::ExecutionContext(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ExecutionContext>(info, context))) {}
 void ::System::Threading::ExecutionContext::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool ::System::Threading::ExecutionContext::IsDefaultFTContext(bool ignoreSyncCtx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext>::get(),
                            "IsDefaultFTContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ignoreSyncCtx);
}
} // end anonymous namespace
