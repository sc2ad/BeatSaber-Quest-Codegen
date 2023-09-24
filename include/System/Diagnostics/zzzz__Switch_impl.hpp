#pragma once
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: System::Diagnostics::Switch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Switch::*)(::StringW, ::StringW)>(&System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27d9abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::Switch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Switch::*)(::StringW, ::StringW, ::StringW)>(&System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x27d9b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::Switch._pruneCachedSwitches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Switch::_pruneCachedSwitches)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x27d9d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get(),
                            "_pruneCachedSwitches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::Switch::__set_description(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Diagnostics::Switch::__get_description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::Switch::__set_displayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Diagnostics::Switch::__get_displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::Switch::__set_switchValueString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Diagnostics::Switch::__get_switchValueString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::Switch::__set_defaultValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Diagnostics::Switch::__get_defaultValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Diagnostics::Switch::__set_switches(System::Collections::Generic::List_1<System::WeakReference> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<System::WeakReference>, "switches", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get>(std::forward<System::Collections::Generic::List_1<System::WeakReference>>(value));
}
 System::Collections::Generic::List_1<System::WeakReference> System::Diagnostics::Switch::__get_switches()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<System::WeakReference>, "switches", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get>();
}
 void System::Diagnostics::Switch::__set_s_LastCollectionCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_LastCollectionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get>(std::forward<int32_t>(value));
}
 int32_t System::Diagnostics::Switch::__get_s_LastCollectionCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_LastCollectionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get>();
}
 System::Diagnostics::Switch System::Diagnostics::Switch::New_ctor(::StringW displayName, ::StringW description)  {
System::Diagnostics::Switch o{THROW_UNLESS(::il2cpp_utils::New<System::Diagnostics::Switch>(displayName, description))};
return o;
}
 void System::Diagnostics::Switch::_ctor(::StringW displayName, ::StringW description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, displayName, description);
}
 System::Diagnostics::Switch System::Diagnostics::Switch::New_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue)  {
System::Diagnostics::Switch o{THROW_UNLESS(::il2cpp_utils::New<System::Diagnostics::Switch>(displayName, description, defaultSwitchValue))};
return o;
}
 void System::Diagnostics::Switch::_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, displayName, description, defaultSwitchValue);
}
 void System::Diagnostics::Switch::_pruneCachedSwitches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Switch>::get(),
                            "_pruneCachedSwitches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
