#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentSO_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO.get_alwaysOwnedBeatmapLevelIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW> (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedBeatmapLevelIds)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20c7928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "get_alwaysOwnedBeatmapLevelIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO.get_alwaysOwnedPacksIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW> (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedPacksIds)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20c7bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "get_alwaysOwnedPacksIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20c81c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::AlwaysOwnedContentContainerSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO.InitAlwaysOwnedItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::InitAlwaysOwnedItems)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x20c7c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "InitAlwaysOwnedItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c81dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AlwaysOwnedContentContainerSO::__set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AlwaysOwnedContentSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AlwaysOwnedContentSO>(value));
}
constexpr ::GlobalNamespace::AlwaysOwnedContentSO ::GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedContent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AlwaysOwnedContentSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AlwaysOwnedContentContainerSO::__set__alwaysOwnedBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW> ::GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedBeatmapLevelIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AlwaysOwnedContentContainerSO::__set__alwaysOwnedPacksIds(::System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW> ::GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedPacksIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::HashSet_1<::StringW> ::GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedBeatmapLevelIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "get_alwaysOwnedBeatmapLevelIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::HashSet_1<::StringW> ::GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedPacksIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "get_alwaysOwnedPacksIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AlwaysOwnedContentContainerSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AlwaysOwnedContentContainerSO::InitAlwaysOwnedItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            "InitAlwaysOwnedItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::AlwaysOwnedContentContainerSO::AlwaysOwnedContentContainerSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<AlwaysOwnedContentContainerSO>())) {}
 void ::GlobalNamespace::AlwaysOwnedContentContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
