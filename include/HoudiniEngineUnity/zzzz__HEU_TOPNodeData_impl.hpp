#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_WorkItemTally_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPWorkResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::HoudiniEngineUnity__HEU_TOPNodeData__PDGState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::NONE{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::DIRTIED{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::DIRTYING{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::COOKING{3};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::COOK_COMPLETE{4};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState::COOK_FAILED{5};
//  Writing Method size for method: HoudiniEngineUnity::HEU_TOPNodeData.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x202b0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_TOPNodeData.AreAllWorkItemsComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x202b0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "AreAllWorkItemsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_TOPNodeData.AnyWorkItemsFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x202ae94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "AnyWorkItemsFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_TOPNodeData.AnyWorkItemsPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x202b16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "AnyWorkItemsPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_TOPNodeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&HoudiniEngineUnity::HEU_TOPNodeData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2029684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__nodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_TOPNodeData::__get__nodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__nodeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_TOPNodeData::__get__nodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__parentName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_TOPNodeData::__get__parentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__workResultParentGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_TOPNodeData::__get__workResultParentGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__workResults(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult> HoudiniEngineUnity::HEU_TOPNodeData::__get__workResults() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__tags(HoudiniEngineUnity::TOPNodeTags value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::TOPNodeTags, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::TOPNodeTags>(value));
}
constexpr HoudiniEngineUnity::TOPNodeTags HoudiniEngineUnity::HEU_TOPNodeData::__get__tags() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::TOPNodeTags, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__showResults(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_TOPNodeData::__get__showResults() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__pdgState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState HoudiniEngineUnity::HEU_TOPNodeData::__get__pdgState() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__workItemTally(HoudiniEngineUnity::HEU_WorkItemTally value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_WorkItemTally, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_WorkItemTally>(value));
}
constexpr HoudiniEngineUnity::HEU_WorkItemTally HoudiniEngineUnity::HEU_TOPNodeData::__get__workItemTally() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_WorkItemTally, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HoudiniEngineUnity::HEU_TOPNodeData::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "AreAllWorkItemsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "AnyWorkItemsFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            "AnyWorkItemsPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_TOPNodeData HoudiniEngineUnity::HEU_TOPNodeData::New_ctor()  {
HoudiniEngineUnity::HEU_TOPNodeData o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_TOPNodeData>())};
return o;
}
 void HoudiniEngineUnity::HEU_TOPNodeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_TOPNodeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
