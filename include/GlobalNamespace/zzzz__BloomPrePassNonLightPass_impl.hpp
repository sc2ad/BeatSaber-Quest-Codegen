#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType  GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType::None{0};
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType  GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType::BeforeBlur{1};
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType  GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType::AfterBlur{2};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.get_executionTimeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f94ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "get_executionTimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.get_bloomPrePassAfterBlurList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f94ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "get_bloomPrePassAfterBlurList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.get_bloomPrePassBeforeBlurList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f94f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "get_bloomPrePassBeforeBlurList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f9395c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassNonLightPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f94f7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassNonLightPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::Register)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1f937f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.Unregister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::Unregister)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1f93734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1f94328;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassNonLightPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)(UnityEngine::RenderTexture, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassNonLightPass::Render)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassNonLightPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassNonLightPass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f920c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassNonLightPass::__set__executionTimeType(GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass::__get__executionTimeType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomPrePassNonLightPass::__set__bloomPrePassAfterBlurList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>, "_bloomPrePassAfterBlurList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get>(std::forward<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>>(value));
}
 System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> GlobalNamespace::BloomPrePassNonLightPass::__get__bloomPrePassAfterBlurList()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>, "_bloomPrePassAfterBlurList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get>();
}
 void GlobalNamespace::BloomPrePassNonLightPass::__set__bloomPrePassBeforeBlurList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>, "_bloomPrePassBeforeBlurList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get>(std::forward<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>>(value));
}
 System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> GlobalNamespace::BloomPrePassNonLightPass::__get__bloomPrePassBeforeBlurList()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>, "_bloomPrePassBeforeBlurList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get>();
}
constexpr void GlobalNamespace::BloomPrePassNonLightPass::__set__registeredExecutionTimeType(GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass::__get__registeredExecutionTimeType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "get_executionTimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "get_bloomPrePassAfterBlurList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "get_bloomPrePassBeforeBlurList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::BloomPrePassNonLightPass::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassNonLightPass::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassNonLightPass::Register()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassNonLightPass::Unregister()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassNonLightPass::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassNonLightPass::Render(UnityEngine::RenderTexture dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dest, viewMatrix, projectionMatrix);
}
 GlobalNamespace::BloomPrePassNonLightPass GlobalNamespace::BloomPrePassNonLightPass::New_ctor()  {
GlobalNamespace::BloomPrePassNonLightPass o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BloomPrePassNonLightPass>())};
return o;
}
 void GlobalNamespace::BloomPrePassNonLightPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassNonLightPass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
