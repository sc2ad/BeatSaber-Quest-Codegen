#pragma once
#include "System/Globalization/zzzz__EraInfo_def.hpp"
//  Writing Method size for method: System::Globalization::EraInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::EraInfo::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&System::Globalization::EraInfo::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23f286c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::EraInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::EraInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::EraInfo::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW, ::StringW, ::StringW)>(&System::Globalization::EraInfo::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23f2908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::EraInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::EraInfo::__set_era(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::EraInfo::__get_era() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_ticks(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Globalization::EraInfo::__get_ticks() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_yearOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::EraInfo::__get_yearOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_minEraYear(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::EraInfo::__get_minEraYear() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_maxEraYear(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::EraInfo::__get_maxEraYear() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_eraName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::EraInfo::__get_eraName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_abbrevEraName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::EraInfo::__get_abbrevEraName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::EraInfo::__set_englishEraName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::EraInfo::__get_englishEraName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startMonth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startDay", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yearOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minEraYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxEraYear", ty: "int32_t", modifiers: "", def_value: None }]
 System::Globalization::EraInfo::EraInfo(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EraInfo>(era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear))) {}
 void System::Globalization::EraInfo::_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::EraInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear);
}
// Ctor Parameters [CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startMonth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startDay", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yearOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minEraYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxEraYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eraName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "abbrevEraName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "englishEraName", ty: "::StringW", modifiers: "", def_value: None }]
 System::Globalization::EraInfo::EraInfo(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EraInfo>(era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear, eraName, abbrevEraName, englishEraName))) {}
 void System::Globalization::EraInfo::_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::EraInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear, eraName, abbrevEraName, englishEraName);
}
