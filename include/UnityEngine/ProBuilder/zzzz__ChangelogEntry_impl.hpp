#pragma once
#include "UnityEngine/ProBuilder/zzzz__ChangelogEntry_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SemVer_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::ChangelogEntry.get_versionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::SemVer (UnityEngine::ProBuilder::ChangelogEntry::*)()>(&UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a8300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            "get_versionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::ChangelogEntry.get_releaseNotes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::ChangelogEntry::*)()>(&UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a8308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            "get_releaseNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::ChangelogEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ChangelogEntry::*)(UnityEngine::ProBuilder::SemVer, ::StringW)>(&UnityEngine::ProBuilder::ChangelogEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29a8310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SemVer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::ChangelogEntry.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::ChangelogEntry::*)()>(&UnityEngine::ProBuilder::ChangelogEntry::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29a833c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::ChangelogEntry),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::ChangelogEntry::__set_m_VersionInfo(UnityEngine::ProBuilder::SemVer value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::SemVer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::SemVer>(value));
}
constexpr UnityEngine::ProBuilder::SemVer UnityEngine::ProBuilder::ChangelogEntry::__get_m_VersionInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::SemVer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::ChangelogEntry::__set_m_ReleaseNotes(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ProBuilder::ChangelogEntry::__get_m_ReleaseNotes() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::SemVer UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            "get_versionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::SemVer, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            "get_releaseNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "version", ty: "UnityEngine::ProBuilder::SemVer", modifiers: "", def_value: None }, CppParam { name: "releaseNotes", ty: "::StringW", modifiers: "", def_value: None }]
 UnityEngine::ProBuilder::ChangelogEntry::ChangelogEntry(UnityEngine::ProBuilder::SemVer version, ::StringW releaseNotes)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ChangelogEntry>(version, releaseNotes))) {}
 void UnityEngine::ProBuilder::ChangelogEntry::_ctor(UnityEngine::ProBuilder::SemVer version, ::StringW releaseNotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SemVer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, version, releaseNotes);
}
 ::StringW UnityEngine::ProBuilder::ChangelogEntry::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ChangelogEntry>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
