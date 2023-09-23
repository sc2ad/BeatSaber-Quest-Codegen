#pragma once
#include "System/Diagnostics/zzzz__TraceInternal_def.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
//  Writing Method size for method: System::Diagnostics::TraceInternal.get_Listeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Diagnostics::TraceListenerCollection (*)()>(&System::Diagnostics::TraceInternal::get_Listeners)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x27da410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_Listeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::TraceInternal.get_AutoFlush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::TraceInternal::get_AutoFlush)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27da6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_AutoFlush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::TraceInternal.get_IndentLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Diagnostics::TraceInternal::get_IndentLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27db148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_IndentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::TraceInternal.get_IndentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Diagnostics::TraceInternal::get_IndentSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27db1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_IndentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::TraceInternal.InitializeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::TraceInternal::InitializeSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27dae70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "InitializeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Diagnostics::TraceInternal::__set_appName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "appName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Diagnostics::TraceInternal::__get_appName()  {
return ::cordl_internals::getStaticField<::StringW, "appName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>();
}
 void System::Diagnostics::TraceInternal::__set_listeners(System::Diagnostics::TraceListenerCollection value)  {
::cordl_internals::setStaticField<System::Diagnostics::TraceListenerCollection, "listeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>(std::forward<System::Diagnostics::TraceListenerCollection>(value));
}
 System::Diagnostics::TraceListenerCollection System::Diagnostics::TraceInternal::__get_listeners()  {
return ::cordl_internals::getStaticField<System::Diagnostics::TraceListenerCollection, "listeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>();
}
 void System::Diagnostics::TraceInternal::__set_autoFlush(bool value)  {
::cordl_internals::setStaticField<bool, "autoFlush", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>(std::forward<bool>(value));
}
 bool System::Diagnostics::TraceInternal::__get_autoFlush()  {
return ::cordl_internals::getStaticField<bool, "autoFlush", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>();
}
 void System::Diagnostics::TraceInternal::__set_indentLevel(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "indentLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>(std::forward<int32_t>(value));
}
 int32_t System::Diagnostics::TraceInternal::__get_indentLevel()  {
return ::cordl_internals::getStaticField<int32_t, "indentLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>();
}
 void System::Diagnostics::TraceInternal::__set_indentSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "indentSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>(std::forward<int32_t>(value));
}
 int32_t System::Diagnostics::TraceInternal::__get_indentSize()  {
return ::cordl_internals::getStaticField<int32_t, "indentSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>();
}
 void System::Diagnostics::TraceInternal::__set_critSec(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "critSec", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Diagnostics::TraceInternal::__get_critSec()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "critSec", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get>();
}
 System::Diagnostics::TraceListenerCollection System::Diagnostics::TraceInternal::get_Listeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_Listeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Diagnostics::TraceListenerCollection, false>(nullptr, ___internal_method);
}
 bool System::Diagnostics::TraceInternal::get_AutoFlush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_AutoFlush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 int32_t System::Diagnostics::TraceInternal::get_IndentLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_IndentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t System::Diagnostics::TraceInternal::get_IndentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "get_IndentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::Diagnostics::TraceInternal::InitializeSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::TraceInternal>::get(),
                            "InitializeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
