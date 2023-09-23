#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::None{0};
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::MusicPacks{1};
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::CustomSongs{2};
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::Favorites{3};
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory::All{4};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::*)()>(&GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216ca80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::__set_levelCategory(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::__get_levelCategory() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::__set_localizedKey(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::__get_localizedKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::__set_categoryIcon(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::__get_categoryIcon() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>())) {}
 void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::*)()>(&GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216c714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0._Setup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::*)(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo)>(&GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::_Setup_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x216ca88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0>::get(),
                            "<Setup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::__set_enabledLevelCategories(::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::__get_enabledLevelCategories() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0>())) {}
 void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0::_Setup_b__0(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0>::get(),
                            "<Setup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::*)()>(&GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216cb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c._Setup_b__12_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::HMUI__IconSegmentedControl__DataItem (GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::*)(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo)>(&GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::_Setup_b__12_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x216cb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get(),
                            "<Setup>b__12_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c._Setup_b__12_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory (GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::*)(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo)>(&GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::_Setup_b__12_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x216cbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get(),
                            "<Setup>b__12_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::__set___9(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>(value));
}
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::__set___9__12_1(System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,HMUI::HMUI__IconSegmentedControl__DataItem> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,HMUI::HMUI__IconSegmentedControl__DataItem>, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get>(std::forward<System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,HMUI::HMUI__IconSegmentedControl__DataItem>>(value));
}
 System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,HMUI::HMUI__IconSegmentedControl__DataItem> GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::__get___9__12_1()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,HMUI::HMUI__IconSegmentedControl__DataItem>, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::__set___9__12_2(System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get>(std::forward<System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>(value));
}
 System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::__get___9__12_2()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::GlobalNamespace__SelectLevelCategoryViewController____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SelectLevelCategoryViewController____c>())) {}
 void GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::HMUI__IconSegmentedControl__DataItem GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::_Setup_b__12_1(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get(),
                            "<Setup>b__12_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::HMUI__IconSegmentedControl__DataItem, false>(const_cast<void*>(instance), ___internal_method, x);
}
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c::_Setup_b__12_2(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController____c>::get(),
                            "<Setup>b__12_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.add_didSelectLevelCategoryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>)>(&GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x216811c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "add_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.remove_didSelectLevelCategoryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>)>(&GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2168808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "remove_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.get_selectedLevelCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory (GlobalNamespace::SelectLevelCategoryViewController::*)()>(&GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2167418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, ::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>)>(&GlobalNamespace::SelectLevelCategoryViewController::Setup)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2167a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool, bool)>(&GlobalNamespace::SelectLevelCategoryViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x216c71c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SelectLevelCategoryViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool)>(&GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x216c7bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SelectLevelCategoryViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController.LevelFilterCategoryIconSegmentedControlDidSelectCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)(HMUI::SegmentedControl, int32_t)>(&GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x216c85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "LevelFilterCategoryIconSegmentedControlDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SegmentedControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectLevelCategoryViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelCategoryViewController::*)()>(&GlobalNamespace::SelectLevelCategoryViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216ca78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__allLevelCategoryInfos(::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> GlobalNamespace::SelectLevelCategoryViewController::__get__allLevelCategoryInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__levelFilterCategoryIconSegmentedControl(HMUI::IconSegmentedControl value)  {
::cordl_internals::setInstanceField<HMUI::IconSegmentedControl, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::IconSegmentedControl>(value));
}
constexpr HMUI::IconSegmentedControl GlobalNamespace::SelectLevelCategoryViewController::__get__levelFilterCategoryIconSegmentedControl() const {
return ::cordl_internals::getInstanceField<HMUI::IconSegmentedControl, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__analyticsModel(GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAnalyticsModel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAnalyticsModel>(value));
}
constexpr GlobalNamespace::IAnalyticsModel GlobalNamespace::SelectLevelCategoryViewController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAnalyticsModel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>(value));
}
constexpr System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> GlobalNamespace::SelectLevelCategoryViewController::__get_didSelectLevelCategoryEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__prevSelectedLevelCategory(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::SelectLevelCategoryViewController::__get__prevSelectedLevelCategory() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__levelCategoryInfos(::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> GlobalNamespace::SelectLevelCategoryViewController::__get__levelCategoryInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "add_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "remove_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SelectLevelCategoryViewController,GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SelectLevelCategoryViewController::Setup(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory selectedCategory, ::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> enabledLevelCategories)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedCategory, enabledLevelCategories);
}
 void GlobalNamespace::SelectLevelCategoryViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            "LevelFilterCategoryIconSegmentedControlDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SegmentedControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, segmentedControl, index);
}
// Ctor Parameters []
 GlobalNamespace::SelectLevelCategoryViewController::SelectLevelCategoryViewController()  : HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<SelectLevelCategoryViewController>())) {}
 void GlobalNamespace::SelectLevelCategoryViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelCategoryViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
