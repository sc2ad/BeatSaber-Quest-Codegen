#pragma once
#include "UnityEngine/UIElements/zzzz__VisualElementFactoryRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::VisualElementFactoryRegistry.get_factories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> (*)()>(&UnityEngine::UIElements::VisualElementFactoryRegistry::get_factories)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c99048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "get_factories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::IUxmlFactory)>(&UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterFactory)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x2c99ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "RegisterFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualElementFactoryRegistry.TryGetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>)>(&UnityEngine::UIElements::VisualElementFactoryRegistry::TryGetValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c9a364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterEngineFactories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterEngineFactories)> {
  constexpr static std::size_t size = 0xb2c;
  constexpr static std::size_t addrs = 0x2c990f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "RegisterEngineFactories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterUserFactories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterUserFactories)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2c99c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "RegisterUserFactories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::VisualElementFactoryRegistry::__set_s_Factories(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>, "s_Factories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> UnityEngine::UIElements::VisualElementFactoryRegistry::__get_s_Factories()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>, "s_Factories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get>();
}
 System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> UnityEngine::UIElements::VisualElementFactoryRegistry::get_factories()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "get_factories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterFactory(UnityEngine::UIElements::IUxmlFactory factory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "RegisterFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, factory);
}
 bool UnityEngine::UIElements::VisualElementFactoryRegistry::TryGetValue(::StringW fullTypeName, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> factoryList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullTypeName, factoryList);
}
 void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterEngineFactories()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "RegisterEngineFactories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterUserFactories()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementFactoryRegistry>::get(),
                            "RegisterUserFactories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
