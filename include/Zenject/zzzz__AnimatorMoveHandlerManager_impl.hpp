#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__AnimatorMoveHandlerManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IAnimatorMoveHandler_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: Zenject::AnimatorMoveHandlerManager.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorMoveHandlerManager::*)(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler>)>(&Zenject::AnimatorMoveHandlerManager::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorMoveHandlerManager.OnAnimatorMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorMoveHandlerManager::*)()>(&Zenject::AnimatorMoveHandlerManager::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2d95560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "OnAnimatorMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorMoveHandlerManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorMoveHandlerManager::*)()>(&Zenject::AnimatorMoveHandlerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorMoveHandlerManager.__zenInjectMethod0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::AnimatorMoveHandlerManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d95718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorMoveHandlerManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::AnimatorMoveHandlerManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2d957f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::AnimatorMoveHandlerManager::__set__handlers(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> Zenject::AnimatorMoveHandlerManager::__get__handlers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::AnimatorMoveHandlerManager::Construct(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler> handlers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handlers);
}
 void Zenject::AnimatorMoveHandlerManager::OnAnimatorMove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "OnAnimatorMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Zenject::AnimatorMoveHandlerManager::AnimatorMoveHandlerManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<AnimatorMoveHandlerManager>())) {}
 void Zenject::AnimatorMoveHandlerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::AnimatorMoveHandlerManager::__zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 Zenject::InjectTypeInfo Zenject::AnimatorMoveHandlerManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorMoveHandlerManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
