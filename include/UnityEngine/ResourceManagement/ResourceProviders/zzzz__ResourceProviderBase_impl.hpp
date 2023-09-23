#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IInitializableObject_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::*)(System::Func_1<bool>)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a40914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a4091c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::Execute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a4098c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a408c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::__set_m_CallBack(System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<System::Func_1<bool>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<bool>>(value));
}
constexpr System::Func_1<bool> UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::__get_m_CallBack() const {
return ::cordl_internals::getInstanceField<System::Func_1<bool>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::Init(System::Func_1<bool> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp()  : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>())) {}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a408bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0._InitializeAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::_InitializeAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a40a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0>::get(),
                            "<InitializeAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::__set___4__this(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::__set_data(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::__get_data() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0>())) {}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0::_InitializeAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0>::get(),
                            "<InitializeAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.get_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a40638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::StringW, ::StringW)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a40688;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.CanProvide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(System::Type, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a406ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a406ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a406f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.GetDefaultType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a406fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.Provide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.InitializeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceManager, ::StringW, ::StringW)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2a40768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase.UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4090c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3e1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider
constexpr  UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::operator UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider() const noexcept {
return UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IInitializableObject
constexpr  UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::operator UnityEngine::ResourceManagement::Util::IInitializableObject() const noexcept {
return UnityEngine::ResourceManagement::Util::IInitializableObject(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__set_m_ProviderId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__get_m_ProviderId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__set_m_BehaviourFlags(UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::__get_m_BehaviourFlags() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize(::StringW id, ::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, id, data);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide(System::Type t, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "CanProvide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t, location);
}
 ::StringW UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, location, obj);
}
 System::Type UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "GetDefaultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, location);
}
 void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "Provide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provideHandle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync(UnityEngine::ResourceManagement::ResourceManager rm, ::StringW id, ::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "InitializeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(const_cast<void*>(instance), ___internal_method, rm, id, data);
}
 UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ResourceProviderBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ResourceProviderBase>())) {}
 void UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
