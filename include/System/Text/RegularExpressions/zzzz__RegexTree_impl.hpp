#pragma once
namespace {
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexTree._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexTree::*)(::System::Text::RegularExpressions::RegexNode, ::System::Collections::Hashtable, ::ArrayW<int32_t>, int32_t, ::System::Collections::Hashtable, ::ArrayW<::StringW>, ::System::Text::RegularExpressions::RegexOptions)>(&::System::Text::RegularExpressions::RegexTree::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27d1380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexTree>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_Root(::System::Text::RegularExpressions::RegexNode value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::RegexNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::RegularExpressions::RegexNode>(value));
}
constexpr ::System::Text::RegularExpressions::RegexNode ::System::Text::RegularExpressions::RegexTree::__get_Root() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_Caps(::System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Hashtable>(value));
}
constexpr ::System::Collections::Hashtable ::System::Text::RegularExpressions::RegexTree::__get_Caps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_CapNumList(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Text::RegularExpressions::RegexTree::__get_CapNumList() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_CapTop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Text::RegularExpressions::RegexTree::__get_CapTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_CapNames(::System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Hashtable>(value));
}
constexpr ::System::Collections::Hashtable ::System::Text::RegularExpressions::RegexTree::__get_CapNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_CapsList(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::System::Text::RegularExpressions::RegexTree::__get_CapsList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::RegexTree::__set_Options(::System::Text::RegularExpressions::RegexOptions value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::RegexOptions, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::RegularExpressions::RegexOptions>(value));
}
constexpr ::System::Text::RegularExpressions::RegexOptions ::System::Text::RegularExpressions::RegexTree::__get_Options() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexOptions, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "root", ty: "::System::Text::RegularExpressions::RegexNode", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capNumList", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "capTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capNames", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capsList", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }]
 ::System::Text::RegularExpressions::RegexTree::RegexTree(::System::Text::RegularExpressions::RegexNode root, ::System::Collections::Hashtable caps, ::ArrayW<int32_t> capNumList, int32_t capTop, ::System::Collections::Hashtable capNames, ::ArrayW<::StringW> capsList, ::System::Text::RegularExpressions::RegexOptions options)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RegexTree>(root, caps, capNumList, capTop, capNames, capsList, options))) {}
 void ::System::Text::RegularExpressions::RegexTree::_ctor(::System::Text::RegularExpressions::RegexNode root, ::System::Collections::Hashtable caps, ::ArrayW<int32_t> capNumList, int32_t capTop, ::System::Collections::Hashtable capNames, ::ArrayW<::StringW> capsList, ::System::Text::RegularExpressions::RegexOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexTree>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, root, caps, capNumList, capTop, capNames, capsList, options);
}
} // end anonymous namespace
