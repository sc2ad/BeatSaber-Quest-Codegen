#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group::GlobalNamespace__AbTestExperimentDefinitionSO__Group(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group  GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group::Control{0};
constexpr GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group  GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group::Test1{1};
constexpr GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group  GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group::Test2{2};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.get_test1GroupSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21909b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_test1GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.get_test2GroupSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21909bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_test2GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.get_experimentName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21909c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_experimentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.get_currentUserTreatmentGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21909cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_currentUserTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21909d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.ComputeCurrentUserTreatment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2190a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "ComputeCurrentUserTreatment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.ForceSetTreatmentGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)(GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group)>(&GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2190ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "ForceSetTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO.AbSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group (GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2190a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "AbSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AbTestExperimentDefinitionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2190ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__experimentName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::AbTestExperimentDefinitionSO::__get__experimentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__test1GroupSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AbTestExperimentDefinitionSO::__get__test1GroupSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__test2GroupSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AbTestExperimentDefinitionSO::__get__test2GroupSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__controlGroupSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AbTestExperimentDefinitionSO::__get__controlGroupSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__salt(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::AbTestExperimentDefinitionSO::__get__salt() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__currentUserTreatmentGroup(GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::__get__currentUserTreatmentGroup() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_test1GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_test2GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_experimentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "get_currentUserTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "ComputeCurrentUserTreatment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup(GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "ForceSetTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, group);
}
 GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            "AbSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__AbTestExperimentDefinitionSO__Group, false>(const_cast<void*>(instance), ___internal_method, userId);
}
// Ctor Parameters []
 GlobalNamespace::AbTestExperimentDefinitionSO::AbTestExperimentDefinitionSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<AbTestExperimentDefinitionSO>())) {}
 void GlobalNamespace::AbTestExperimentDefinitionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AbTestExperimentDefinitionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
