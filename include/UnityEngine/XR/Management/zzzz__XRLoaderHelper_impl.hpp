#pragma once
#include "UnityEngine/XR/Management/zzzz__XRLoader_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: UnityEngine::XR::Management::XRLoaderHelper.Deinitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRLoaderHelper::*)()>(&UnityEngine::XR::Management::XRLoaderHelper::Deinitialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2addb98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::Management::XRLoaderHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::Management::XRLoaderHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRLoaderHelper::*)()>(&UnityEngine::XR::Management::XRLoaderHelper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2addbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::Management::XRLoaderHelper::__set_m_SubsystemInstanceMap(System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem> UnityEngine::XR::Management::XRLoaderHelper::__get_m_SubsystemInstanceMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
template<typename T>
 T UnityEngine::XR::Management::XRLoaderHelper::GetLoadedSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "GetLoadedSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void UnityEngine::XR::Management::XRLoaderHelper::StartSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "StartSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void UnityEngine::XR::Management::XRLoaderHelper::StopSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "StopSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void UnityEngine::XR::Management::XRLoaderHelper::DestroySubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "DestroySubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TDescriptor,typename TSubsystem>
 void UnityEngine::XR::Management::XRLoaderHelper::CreateSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "CreateSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<TDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, descriptors, id);
}
template<typename TDescriptor,typename TSubsystem>
 void UnityEngine::XR::Management::XRLoaderHelper::CreateIntegratedSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "CreateIntegratedSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<TDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, descriptors, id);
}
template<typename TDescriptor,typename TSubsystem>
 void UnityEngine::XR::Management::XRLoaderHelper::CreateStandaloneSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                        "CreateStandaloneSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<TDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, descriptors, id);
}
 bool UnityEngine::XR::Management::XRLoaderHelper::Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                            "Deinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::XR::Management::XRLoaderHelper::XRLoaderHelper()  : UnityEngine::XR::Management::XRLoader(THROW_UNLESS(::il2cpp_utils::New<XRLoaderHelper>())) {}
 void UnityEngine::XR::Management::XRLoaderHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRLoaderHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
