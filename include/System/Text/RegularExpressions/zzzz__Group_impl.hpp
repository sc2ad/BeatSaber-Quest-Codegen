#pragma once
#include "System/Text/RegularExpressions/zzzz__Capture_impl.hpp"
namespace {
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::Group::*)(::StringW, ::ArrayW<int32_t>, int32_t, ::StringW)>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27bcacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::get_Success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27bcb68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27bcc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Text::RegularExpressions::Group::__set_s_emptyGroup(::System::Text::RegularExpressions::Group value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Group, "s_emptyGroup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get>(std::forward<::System::Text::RegularExpressions::Group>(value));
}
 ::System::Text::RegularExpressions::Group ::System::Text::RegularExpressions::Group::__get_s_emptyGroup()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Group, "s_emptyGroup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get>();
}
constexpr void ::System::Text::RegularExpressions::Group::__set__caps(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Text::RegularExpressions::Group::__get__caps() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::Group::__set__capcount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Text::RegularExpressions::Group::__get__capcount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::Group::__set__capcoll(::System::Text::RegularExpressions::CaptureCollection value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::CaptureCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::RegularExpressions::CaptureCollection>(value));
}
constexpr ::System::Text::RegularExpressions::CaptureCollection ::System::Text::RegularExpressions::Group::__get__capcoll() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::CaptureCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::Group::__set__Name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Text::RegularExpressions::Group::__get__Name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "capcount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Text::RegularExpressions::Group::Group(::StringW text, ::ArrayW<int32_t> caps, int32_t capcount, ::StringW name)  : ::System::Text::RegularExpressions::Capture(THROW_UNLESS(::il2cpp_utils::New<Group>(text, caps, capcount, name))) {}
 void ::System::Text::RegularExpressions::Group::_ctor(::StringW text, ::ArrayW<int32_t> caps, int32_t capcount, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text, caps, capcount, name);
}
 bool ::System::Text::RegularExpressions::Group::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Text::RegularExpressions::Group::Group()  : ::System::Text::RegularExpressions::Capture(THROW_UNLESS(::il2cpp_utils::New<Group>())) {}
 void ::System::Text::RegularExpressions::Group::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
