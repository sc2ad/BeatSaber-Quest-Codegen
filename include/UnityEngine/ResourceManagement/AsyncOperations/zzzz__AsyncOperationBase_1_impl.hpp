#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0._add_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::_add_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0::_add_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>._add_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::_add_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>::_add_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<bool>>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._add_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_add_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_add_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>._add_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::_add_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>::_add_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>>::get(),
                            "<add_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0._remove_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::_remove_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0::_remove_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>._remove_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::_remove_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>::_remove_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<bool>>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._remove_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_remove_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_remove_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>._remove_CompletedTypeless_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::_remove_CompletedTypeless_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::__set_value(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>::_remove_CompletedTypeless_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>>::get(),
                            "<remove_CompletedTypeless>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Progress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TObject (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.set_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(TObject)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_CompletedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_CompletedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_DestroyedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_DestroyedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.set_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.ShortenPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::ShortenPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::WaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<TObject> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.RegisterForDeferredCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::RegisterForDeferredCallbackEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.add_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::add_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.remove_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::remove_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.set_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Exception)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(float_t)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UpdateCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(TObject, bool, ::StringW)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(TObject, bool, ::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(TObject, bool, System::Exception, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.InvokeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::InvokeExecute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::ReleaseDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1.__ctor_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation
constexpr  UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::operator UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set__Result_k__BackingField(TObject value)  {
::cordl_internals::setInstanceField<TObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TObject>(value));
}
constexpr TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get__Result_k__BackingField() const {
return ::cordl_internals::getInstanceField<TObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_Status(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_Status() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_Error(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_Error() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_RM(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_RM() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_DestroyedAction(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_DestroyedAction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_CompletedActionT(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_CompletedActionT() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_OnDestroyAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_OnDestroyAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_dependencyCompleteAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_dependencyCompleteAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_HasExecuted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_HasExecuted() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set__IsRunning_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get__IsRunning_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<TObject> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<TObject>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<TObject>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<TObject>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_taskCompletionSourceTypeless(System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_taskCompletionSourceTypeless() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_InDeferredCallbackQueue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_InDeferredCallbackQueue() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_UpdateCallbacks(GlobalNamespace::DelegateList_1<float_t> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<float_t>>(value));
}
constexpr GlobalNamespace::DelegateList_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_UpdateCallbacks() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__set_m_UpdateCallback(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__get_m_UpdateCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> dependencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependencies);
}
 TObject UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_Result(TObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_CompletedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_DestroyedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_IsRunning(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::AsyncOperationBase_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncOperationBase_1>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::ShortenPath(::StringW p, bool keepExtension)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p, keepExtension);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param incrementReferenceCount: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::RegisterForDeferredCallbackEvent(bool incrementReferenceCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, incrementReferenceCount);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::set_OperationException(System::Exception value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UpdateCallback(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Complete(TObject result, bool success, ::StringW errorMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Complete(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Complete(TObject result, bool success, System::Exception exception, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::InvokeExecute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1::__ctor_b__35_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Progress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.set_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_CompletedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_CompletedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_DestroyedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_DestroyedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.set_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.ShortenPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::ShortenPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::WaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.RegisterForDeferredCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::RegisterForDeferredCallbackEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.add_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::add_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.remove_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::remove_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.set_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Exception)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(float_t)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UpdateCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(bool, bool, ::StringW)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(bool, bool, ::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(bool, bool, System::Exception, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.InvokeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::InvokeExecute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::ReleaseDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>.__ctor_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation
constexpr  UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::operator UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set__Result_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get__Result_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_Status(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_Status() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_Error(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_Error() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_RM(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_RM() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_DestroyedAction(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_DestroyedAction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_CompletedActionT(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_CompletedActionT() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_OnDestroyAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_OnDestroyAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_dependencyCompleteAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_dependencyCompleteAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_HasExecuted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_HasExecuted() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set__IsRunning_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get__IsRunning_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_taskCompletionSourceTypeless(System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_taskCompletionSourceTypeless() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_InDeferredCallbackQueue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_InDeferredCallbackQueue() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_UpdateCallbacks(GlobalNamespace::DelegateList_1<float_t> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<float_t>>(value));
}
constexpr GlobalNamespace::DelegateList_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_UpdateCallbacks() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__set_m_UpdateCallback(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__get_m_UpdateCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> dependencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependencies);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_Result(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_CompletedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_DestroyedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_IsRunning(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::AsyncOperationBase_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncOperationBase_1>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::ShortenPath(::StringW p, bool keepExtension)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p, keepExtension);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<bool> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param incrementReferenceCount: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::RegisterForDeferredCallbackEvent(bool incrementReferenceCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, incrementReferenceCount);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::set_OperationException(System::Exception value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UpdateCallback(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Complete(bool result, bool success, ::StringW errorMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Complete(bool result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Complete(bool result, bool success, System::Exception exception, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::InvokeExecute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>::__ctor_b__35_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Progress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.set_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_CompletedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_CompletedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_DestroyedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DestroyedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.set_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.ShortenPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ShortenPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::WaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.RegisterForDeferredCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::RegisterForDeferredCallbackEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.add_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::add_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.remove_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::remove_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.set_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Exception)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(float_t)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UpdateCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool, ::StringW)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool, ::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool, System::Exception, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InvokeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeExecute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ReleaseDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.__ctor_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation
constexpr  UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::operator UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set__Result_k__BackingField(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneInstance UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get__Result_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_Status(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Status() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_Error(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Error() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_RM(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_RM() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_DestroyedAction(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_DestroyedAction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_CompletedActionT(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_CompletedActionT() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_OnDestroyAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_OnDestroyAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_dependencyCompleteAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_dependencyCompleteAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_HasExecuted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_HasExecuted() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set__IsRunning_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get__IsRunning_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_taskCompletionSourceTypeless(System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_taskCompletionSourceTypeless() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_InDeferredCallbackQueue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_InDeferredCallbackQueue() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_UpdateCallbacks(GlobalNamespace::DelegateList_1<float_t> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<float_t>>(value));
}
constexpr GlobalNamespace::DelegateList_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_UpdateCallbacks() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_UpdateCallback(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_UpdateCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> dependencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependencies);
}
 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_Result(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_CompletedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DestroyedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_IsRunning(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::AsyncOperationBase_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncOperationBase_1>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ShortenPath(::StringW p, bool keepExtension)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p, keepExtension);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param incrementReferenceCount: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::RegisterForDeferredCallbackEvent(bool incrementReferenceCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, incrementReferenceCount);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::set_OperationException(System::Exception value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UpdateCallback(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Complete(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, bool success, ::StringW errorMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Complete(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Complete(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, bool success, System::Exception exception, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeExecute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__ctor_b__35_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Progress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.set_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(int64_t)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_Result)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_CompletedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_CompletedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_DestroyedEventHasListeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_DestroyedEventHasListeners)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.set_IsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.ShortenPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::ShortenPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::WaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int64_t> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.RegisterForDeferredCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::RegisterForDeferredCallbackEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.add_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::add_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.remove_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::remove_Completed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.set_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Exception)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(float_t)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UpdateCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(int64_t, bool, ::StringW)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(int64_t, bool, ::StringW, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(int64_t, bool, System::Exception, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Complete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.InvokeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::InvokeExecute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, GlobalNamespace::DelegateList_1<float_t>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::ReleaseDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>.__ctor_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation
constexpr  UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::operator UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set__Result_k__BackingField(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get__Result_k__BackingField() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_Status(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_Status() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_Error(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_Error() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_RM(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_RM() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_DestroyedAction(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_DestroyedAction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_CompletedActionT(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>(value));
}
constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_CompletedActionT() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_OnDestroyAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_OnDestroyAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_dependencyCompleteAction(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_dependencyCompleteAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_HasExecuted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_HasExecuted() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set__IsRunning_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get__IsRunning_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<int64_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<int64_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<int64_t>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<int64_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<int64_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_taskCompletionSourceTypeless(System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_taskCompletionSourceTypeless() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_InDeferredCallbackQueue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_InDeferredCallbackQueue() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_UpdateCallbacks(GlobalNamespace::DelegateList_1<float_t> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DelegateList_1<float_t>>(value));
}
constexpr GlobalNamespace::DelegateList_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_UpdateCallbacks() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DelegateList_1<float_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__set_m_UpdateCallback(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__get_m_UpdateCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> dependencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependencies);
}
 int64_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_Result(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_CompletedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_CompletedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_DestroyedEventHasListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_DestroyedEventHasListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_IsRunning(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_IsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::AsyncOperationBase_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncOperationBase_1>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::ShortenPath(::StringW p, bool keepExtension)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "ShortenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p, keepExtension);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<int64_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int64_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param incrementReferenceCount: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::RegisterForDeferredCallbackEvent(bool incrementReferenceCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "RegisterForDeferredCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, incrementReferenceCount);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::set_OperationException(System::Exception value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "set_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UpdateCallback(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Complete(int64_t result, bool success, ::StringW errorMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Complete(int64_t result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Complete(int64_t result, bool success, System::Exception exception, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::InvokeExecute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "InvokeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency, GlobalNamespace::DelegateList_1<float_t> updateCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DelegateList_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, dependency, updateCallbacks);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>::__ctor_b__35_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>>::get(),
                            "<.ctor>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
