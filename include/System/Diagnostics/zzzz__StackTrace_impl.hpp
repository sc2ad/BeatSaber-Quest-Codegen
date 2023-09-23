#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat::System__Diagnostics__StackTrace__TraceFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat  System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat::Normal{0};
constexpr System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat  System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat::TrailingNewLine{1};
constexpr System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat  System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat::NoResourceLookup{2};
//  Writing Method size for method: System::Diagnostics::StackTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)()>(&System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x240c62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(bool)>(&System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x240c84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(int32_t)>(&System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x240c87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(int32_t, bool)>(&System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x240c8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.init_frames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(int32_t, bool)>(&System::Diagnostics::StackTrace::init_frames)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x240c650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "init_frames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.get_trace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Diagnostics::StackFrame> (*)(System::Exception, int32_t, bool)>(&System::Diagnostics::StackTrace::get_trace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240c8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "get_trace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(System::Exception, bool)>(&System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x240c8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(System::Exception, int32_t, bool)>(&System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x240c8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.get_FrameCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Diagnostics::StackTrace::*)()>(&System::Diagnostics::StackTrace::get_FrameCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x240c9e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Diagnostics::StackTrace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.GetFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Diagnostics::StackFrame (System::Diagnostics::StackTrace::*)(int32_t)>(&System::Diagnostics::StackTrace::GetFrame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x240c9fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Diagnostics::StackTrace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.GetAotId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Diagnostics::StackTrace::GetAotId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x240ca5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "GetAotId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.AddFrames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::StackTrace::*)(System::Text::StringBuilder, bool, ByRef<bool>)>(&System::Diagnostics::StackTrace::AddFrames)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x240cb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "AddFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.GetFullNameForStackTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(System::Text::StringBuilder, System::Reflection::MethodBase, bool, ByRef<bool>, ByRef<bool>)>(&System::Diagnostics::StackTrace::GetFullNameForStackTrace)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x240cfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "GetFullNameForStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.ConvertAsyncStateMachineMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Reflection::MethodBase>, ByRef<System::Type>)>(&System::Diagnostics::StackTrace::ConvertAsyncStateMachineMethod)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x240d62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "ConvertAsyncStateMachineMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::StackTrace::*)()>(&System::Diagnostics::StackTrace::ToString)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x240da8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Diagnostics::StackTrace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::StackTrace.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::StackTrace::*)(System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat)>(&System::Diagnostics::StackTrace::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x240dbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::StackTrace::__set_frames(::ArrayW<System::Diagnostics::StackFrame> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Diagnostics::StackFrame>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Diagnostics::StackFrame>>(value));
}
constexpr ::ArrayW<System::Diagnostics::StackFrame> System::Diagnostics::StackTrace::__get_frames() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Diagnostics::StackFrame>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::StackTrace::__set_captured_traces(::ArrayW<System::Diagnostics::StackTrace> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Diagnostics::StackTrace>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Diagnostics::StackTrace>>(value));
}
constexpr ::ArrayW<System::Diagnostics::StackTrace> System::Diagnostics::StackTrace::__get_captured_traces() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Diagnostics::StackTrace>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::StackTrace::__set_debug_info(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Diagnostics::StackTrace::__get_debug_info() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Diagnostics::StackTrace::__set_isAotidSet(bool value)  {
::cordl_internals::setStaticField<bool, "isAotidSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get>(std::forward<bool>(value));
}
 bool System::Diagnostics::StackTrace::__get_isAotidSet()  {
return ::cordl_internals::getStaticField<bool, "isAotidSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get>();
}
 void System::Diagnostics::StackTrace::__set_aotid(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "aotid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Diagnostics::StackTrace::__get_aotid()  {
return ::cordl_internals::getStaticField<::StringW, "aotid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get>();
}
// Ctor Parameters []
 System::Diagnostics::StackTrace::StackTrace()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StackTrace>())) {}
 void System::Diagnostics::StackTrace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
 System::Diagnostics::StackTrace::StackTrace(bool fNeedFileInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StackTrace>(fNeedFileInfo))) {}
 void System::Diagnostics::StackTrace::_ctor(bool fNeedFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fNeedFileInfo);
}
// Ctor Parameters [CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }]
 System::Diagnostics::StackTrace::StackTrace(int32_t skipFrames)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StackTrace>(skipFrames))) {}
 void System::Diagnostics::StackTrace::_ctor(int32_t skipFrames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, skipFrames);
}
// Ctor Parameters [CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
 System::Diagnostics::StackTrace::StackTrace(int32_t skipFrames, bool fNeedFileInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StackTrace>(skipFrames, fNeedFileInfo))) {}
 void System::Diagnostics::StackTrace::_ctor(int32_t skipFrames, bool fNeedFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, skipFrames, fNeedFileInfo);
}
 void System::Diagnostics::StackTrace::init_frames(int32_t skipFrames, bool fNeedFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "init_frames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, skipFrames, fNeedFileInfo);
}
 ::ArrayW<System::Diagnostics::StackFrame> System::Diagnostics::StackTrace::get_trace(System::Exception e, int32_t skipFrames, bool fNeedFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "get_trace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Diagnostics::StackFrame>, false>(nullptr, ___internal_method, e, skipFrames, fNeedFileInfo);
}
// Ctor Parameters [CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
 System::Diagnostics::StackTrace::StackTrace(System::Exception e, bool fNeedFileInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StackTrace>(e, fNeedFileInfo))) {}
 void System::Diagnostics::StackTrace::_ctor(System::Exception e, bool fNeedFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, fNeedFileInfo);
}
// Ctor Parameters [CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
 System::Diagnostics::StackTrace::StackTrace(System::Exception e, int32_t skipFrames, bool fNeedFileInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StackTrace>(e, skipFrames, fNeedFileInfo))) {}
 void System::Diagnostics::StackTrace::_ctor(System::Exception e, int32_t skipFrames, bool fNeedFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, skipFrames, fNeedFileInfo);
}
 int32_t System::Diagnostics::StackTrace::get_FrameCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "get_FrameCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Diagnostics::StackFrame System::Diagnostics::StackTrace::GetFrame(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "GetFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Diagnostics::StackFrame, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::StringW System::Diagnostics::StackTrace::GetAotId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "GetAotId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 bool System::Diagnostics::StackTrace::AddFrames(System::Text::StringBuilder sb, bool separator, ByRef<bool> isAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "AddFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sb, separator, isAsync);
}
 void System::Diagnostics::StackTrace::GetFullNameForStackTrace(System::Text::StringBuilder sb, System::Reflection::MethodBase mi, bool needsNewLine, ByRef<bool> skipped, ByRef<bool> isAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "GetFullNameForStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sb, mi, needsNewLine, skipped, isAsync);
}
 void System::Diagnostics::StackTrace::ConvertAsyncStateMachineMethod(ByRef<System::Reflection::MethodBase> method, ByRef<System::Type> declaringType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "ConvertAsyncStateMachineMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, method, declaringType);
}
 ::StringW System::Diagnostics::StackTrace::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Diagnostics::StackTrace::ToString(System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat traceFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::StackTrace>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, traceFormat);
}
