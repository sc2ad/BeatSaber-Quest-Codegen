#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolResourceContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::RecordingToolResourceContainerSO.get_beatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> (GlobalNamespace::RecordingToolResourceContainerSO::*)()>(&GlobalNamespace::RecordingToolResourceContainerSO::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            "get_beatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolResourceContainerSO.get_environmentsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentsListSO (GlobalNamespace::RecordingToolResourceContainerSO::*)()>(&GlobalNamespace::RecordingToolResourceContainerSO::get_environmentsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            "get_environmentsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolResourceContainerSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolResourceContainerSO::*)()>(&GlobalNamespace::RecordingToolResourceContainerSO::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21abfa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RecordingToolResourceContainerSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolResourceContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolResourceContainerSO::*)()>(&GlobalNamespace::RecordingToolResourceContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ac074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__dlcLevelPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::RecordingToolResourceContainerSO::__get__dlcLevelPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__ostAndExtrasPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::RecordingToolResourceContainerSO::__get__ostAndExtrasPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__environmentsList(GlobalNamespace::EnvironmentsListSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentsListSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentsListSO>(value));
}
constexpr GlobalNamespace::EnvironmentsListSO GlobalNamespace::RecordingToolResourceContainerSO::__get__environmentsList() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentsListSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__beatmapLevelPacks(System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::RecordingToolResourceContainerSO::__get__beatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::RecordingToolResourceContainerSO::get_beatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            "get_beatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::EnvironmentsListSO GlobalNamespace::RecordingToolResourceContainerSO::get_environmentsList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            "get_environmentsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EnvironmentsListSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RecordingToolResourceContainerSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::RecordingToolResourceContainerSO::RecordingToolResourceContainerSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<RecordingToolResourceContainerSO>())) {}
 void GlobalNamespace::RecordingToolResourceContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolResourceContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
