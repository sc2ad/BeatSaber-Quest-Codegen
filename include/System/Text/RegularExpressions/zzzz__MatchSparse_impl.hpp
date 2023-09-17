#pragma once
#include "System/Text/RegularExpressions/zzzz__Match_impl.hpp"
namespace {
#include "System/Text/RegularExpressions/zzzz__MatchSparse_def.hpp"
#include "System/Text/RegularExpressions/zzzz__GroupCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::MatchSparse::*)(::System::Text::RegularExpressions::Regex, ::System::Collections::Hashtable, int32_t, ::StringW, int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::MatchSparse::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27becdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse.get_Groups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::GroupCollection (::System::Text::RegularExpressions::MatchSparse::*)()>(&::System::Text::RegularExpressions::MatchSparse::get_Groups)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27bed8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::RegularExpressions::MatchSparse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Text::RegularExpressions::MatchSparse::__set__caps(::System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Hashtable>(value));
}
constexpr ::System::Collections::Hashtable ::System::Text::RegularExpressions::MatchSparse::__get__caps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "regex", ty: "::System::Text::RegularExpressions::Regex", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capcount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "begpos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startpos", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Text::RegularExpressions::MatchSparse::MatchSparse(::System::Text::RegularExpressions::Regex regex, ::System::Collections::Hashtable caps, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos)  : ::System::Text::RegularExpressions::Match(THROW_UNLESS(::il2cpp_utils::New<MatchSparse>(regex, caps, capcount, text, begpos, len, startpos))) {}
 void ::System::Text::RegularExpressions::MatchSparse::_ctor(::System::Text::RegularExpressions::Regex regex, ::System::Collections::Hashtable caps, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, regex, caps, capcount, text, begpos, len, startpos);
}
 ::System::Text::RegularExpressions::GroupCollection ::System::Text::RegularExpressions::MatchSparse::get_Groups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse>::get(),
                            "get_Groups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::GroupCollection, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
