#pragma once
#include "UnityEngine/ProBuilder/zzzz__Changelog_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ChangelogEntry_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Changelog.get_entries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry> (UnityEngine::ProBuilder::Changelog::*)()>(&UnityEngine::ProBuilder::Changelog::get_entries)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29a83a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Changelog>::get(),
                            "get_entries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Changelog._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Changelog::*)(::StringW)>(&UnityEngine::ProBuilder::Changelog::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x29a841c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Changelog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Changelog.CreateEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ChangelogEntry (UnityEngine::ProBuilder::Changelog::*)(::StringW, ::StringW)>(&UnityEngine::ProBuilder::Changelog::CreateEntry)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x29a8728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Changelog>::get(),
                            "CreateEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Changelog::__set_m_Entries(System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry> UnityEngine::ProBuilder::Changelog::__get_m_Entries() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry> UnityEngine::ProBuilder::Changelog::get_entries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Changelog>::get(),
                            "get_entries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ProBuilder::Changelog UnityEngine::ProBuilder::Changelog::New_ctor(::StringW log)  {
UnityEngine::ProBuilder::Changelog o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::Changelog>(log))};
return o;
}
 void UnityEngine::ProBuilder::Changelog::_ctor(::StringW log)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Changelog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, log);
}
 UnityEngine::ProBuilder::ChangelogEntry UnityEngine::ProBuilder::Changelog::CreateEntry(::StringW version, ::StringW contents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Changelog>::get(),
                            "CreateEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::ChangelogEntry, false>(const_cast<void*>(instance), ___internal_method, version, contents);
}
