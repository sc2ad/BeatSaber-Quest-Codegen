#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::GlobalNamespace__SongPackMaskModelSO__SongPackDataType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType  GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::SingleBeatmapLevelPack{0};
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType  GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::MultipleBeatmapLevelPacks{1};
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType  GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::SinglePreviewBeatmapLevelPack{2};
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType  GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::MultiplePreviewBeatmapLevelPacks{3};
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType  GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::SingleBeatmapLevelPackCollection{4};
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType  GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType::MultipleBeatmapLevelPackCollections{5};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::*)()>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x220157c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::*)(GlobalNamespace::BeatmapLevelPackSO)>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2201618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelPackSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::*)(GlobalNamespace::PreviewBeatmapLevelPackSO)>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2201630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PreviewBeatmapLevelPackSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::*)(GlobalNamespace::BeatmapLevelPackCollectionSO)>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_3)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2201648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelPackCollectionSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_4)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x220175c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__set___9(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>(value));
}
 GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__set___9__11_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>(std::forward<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>>(value));
}
 System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__get___9__11_0()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__set___9__11_1(System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW>, "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>(std::forward<System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW>>(value));
}
 System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__get___9__11_1()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW>, "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__set___9__11_2(System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW>, "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>(std::forward<System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW>>(value));
}
 System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__get___9__11_2()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW>, "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__set___9__11_4(System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>, "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>(std::forward<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>>(value));
}
 System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__get___9__11_4()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>, "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__set___9__11_3(System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>>, "<>9__11_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>(std::forward<System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>>>(value));
}
 System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::__get___9__11_3()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>>, "<>9__11_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>())) {}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_0(GlobalNamespace::IBeatmapLevelPack pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pack);
}
 ::StringW GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_1(GlobalNamespace::BeatmapLevelPackSO pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelPackSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pack);
}
 ::StringW GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_2(GlobalNamespace::PreviewBeatmapLevelPackSO pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PreviewBeatmapLevelPackSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pack);
}
 System::Collections::Generic::IEnumerable_1<::StringW> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_3(GlobalNamespace::BeatmapLevelPackCollectionSO collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelPackCollectionSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method, collection);
}
 ::StringW GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_4(GlobalNamespace::IBeatmapLevelPack pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c>::get(),
                            "<get_songPackMask>b__11_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pack);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem.get_serializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::*)()>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::get_serializedName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2201104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            "get_serializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem.get_songPackMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::*)()>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::get_songPackMask)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2201144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            "get_songPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem.get_containsMultiplePacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::*)()>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::get_containsMultiplePacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22014e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            "get_containsMultiplePacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::*)()>(&GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__type(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__type() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__beatmapLevelPack(GlobalNamespace::BeatmapLevelPackSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackSO GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__beatmapLevelPack() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__previewBeatmapLevelPack(GlobalNamespace::PreviewBeatmapLevelPackSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PreviewBeatmapLevelPackSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PreviewBeatmapLevelPackSO>(value));
}
constexpr GlobalNamespace::PreviewBeatmapLevelPackSO GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__previewBeatmapLevelPack() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PreviewBeatmapLevelPackSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__serializedName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__serializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__levelPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__levelPackCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__beatmapLevelPacks(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__beatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__previewBeatmapLevelPacks(System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__previewBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__set__levelPackCollections(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO> GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::__get__levelPackCollections() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::get_serializedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            "get_serializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SongPackMask GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::get_songPackMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            "get_songPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SongPackMask, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::get_containsMultiplePacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            "get_containsMultiplePacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>())) {}
 void GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.get_defaultSongPackMaskItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW> (GlobalNamespace::SongPackMaskModelSO::*)()>(&GlobalNamespace::SongPackMaskModelSO::get_defaultSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2200790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_defaultSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.get_customSongPackMaskItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> (GlobalNamespace::SongPackMaskModelSO::*)()>(&GlobalNamespace::SongPackMaskModelSO::get_customSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2200798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_customSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.get_ostAndExtrasCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelPackCollectionSO (GlobalNamespace::SongPackMaskModelSO::*)()>(&GlobalNamespace::SongPackMaskModelSO::get_ostAndExtrasCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22007a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_ostAndExtrasCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.get_dlcCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelPackCollectionSO (GlobalNamespace::SongPackMaskModelSO::*)()>(&GlobalNamespace::SongPackMaskModelSO::get_dlcCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22007a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_dlcCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.ToLocalizedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPackMaskModelSO::*)(::StringW)>(&GlobalNamespace::SongPackMaskModelSO::ToLocalizedName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22007b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToLocalizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.ToLocalizedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPackMaskModelSO::*)(::StringW, ByRef<bool>)>(&GlobalNamespace::SongPackMaskModelSO::ToLocalizedName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22007c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToLocalizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.ToSongPackMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongPackMaskModelSO::*)(::StringW, ByRef<GlobalNamespace::SongPackMask>)>(&GlobalNamespace::SongPackMaskModelSO::ToSongPackMask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2200f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::SongPackMask>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.ToSongPackMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMaskModelSO::*)(::StringW)>(&GlobalNamespace::SongPackMaskModelSO::ToSongPackMask)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2200fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.ToSerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongPackMaskModelSO::*)(GlobalNamespace::SongPackMask, ByRef<::StringW>)>(&GlobalNamespace::SongPackMaskModelSO::ToSerializedName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x220100c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.ToSerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPackMaskModelSO::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPackMaskModelSO::ToSerializedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2201084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO.LazyInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPackMaskModelSO::*)()>(&GlobalNamespace::SongPackMaskModelSO::LazyInit)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x2200884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "LazyInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMaskModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPackMaskModelSO::*)()>(&GlobalNamespace::SongPackMaskModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__defaultSongPackMaskItems(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::SongPackMaskModelSO::__get__defaultSongPackMaskItems() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__customSongPackMaskItems(::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> GlobalNamespace::SongPackMaskModelSO::__get__customSongPackMaskItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__ostAndExtrasCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::SongPackMaskModelSO::__get__ostAndExtrasCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__dlcCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::SongPackMaskModelSO::__get__dlcCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelPackCollectionSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__currentLocalizedLanguage(Polyglot::Language value)  {
::cordl_internals::setInstanceField<Polyglot::Language, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Polyglot::Language>(value));
}
constexpr Polyglot::Language GlobalNamespace::SongPackMaskModelSO::__get__currentLocalizedLanguage() const {
return ::cordl_internals::getInstanceField<Polyglot::Language, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__songPackSerializedNameToLocalizedNameDict(System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>> GlobalNamespace::SongPackMaskModelSO::__get__songPackSerializedNameToLocalizedNameDict() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__songPackSerializedNameToMaskDict(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> GlobalNamespace::SongPackMaskModelSO::__get__songPackSerializedNameToMaskDict() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__songPackMaskToSerializedNameDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW> GlobalNamespace::SongPackMaskModelSO::__get__songPackMaskToSerializedNameDict() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<::StringW> GlobalNamespace::SongPackMaskModelSO::get_defaultSongPackMaskItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_defaultSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> GlobalNamespace::SongPackMaskModelSO::get_customSongPackMaskItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_customSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::SongPackMaskModelSO::get_ostAndExtrasCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_ostAndExtrasCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelPackCollectionSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelPackCollectionSO GlobalNamespace::SongPackMaskModelSO::get_dlcCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "get_dlcCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelPackCollectionSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::SongPackMaskModelSO::ToLocalizedName(::StringW serializedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToLocalizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, serializedName);
}
 ::StringW GlobalNamespace::SongPackMaskModelSO::ToLocalizedName(::StringW serializedName, ByRef<bool> plural)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToLocalizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, serializedName, plural);
}
 bool GlobalNamespace::SongPackMaskModelSO::ToSongPackMask(::StringW serializedName, ByRef<GlobalNamespace::SongPackMask> songPackMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::SongPackMask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, serializedName, songPackMask);
}
 GlobalNamespace::SongPackMask GlobalNamespace::SongPackMaskModelSO::ToSongPackMask(::StringW serializedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SongPackMask, false>(const_cast<void*>(instance), ___internal_method, serializedName);
}
 bool GlobalNamespace::SongPackMaskModelSO::ToSerializedName(GlobalNamespace::SongPackMask songPackMask, ByRef<::StringW> serializedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, songPackMask, serializedName);
}
 ::StringW GlobalNamespace::SongPackMaskModelSO::ToSerializedName(GlobalNamespace::SongPackMask songPackMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "ToSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, songPackMask);
}
 void GlobalNamespace::SongPackMaskModelSO::LazyInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            "LazyInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::SongPackMaskModelSO::SongPackMaskModelSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<SongPackMaskModelSO>())) {}
 void GlobalNamespace::SongPackMaskModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMaskModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
