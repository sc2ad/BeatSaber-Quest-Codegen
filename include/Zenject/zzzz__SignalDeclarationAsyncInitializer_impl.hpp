#pragma once
#include "Zenject/zzzz__SignalDeclarationAsyncInitializer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
//  Writing Method size for method: Zenject::SignalDeclarationAsyncInitializer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationAsyncInitializer::*)(System::Collections::Generic::List_1<Zenject::SignalDeclaration>, Zenject::LazyInject_1<Zenject::TickableManager>)>(&Zenject::SignalDeclarationAsyncInitializer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d4cce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::SignalDeclaration>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::LazyInject_1<Zenject::TickableManager>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalDeclarationAsyncInitializer.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationAsyncInitializer::*)()>(&Zenject::SignalDeclarationAsyncInitializer::Initialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2d4cd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalDeclarationAsyncInitializer.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::SignalDeclarationAsyncInitializer::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d4ce18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalDeclarationAsyncInitializer.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d4cf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IInitializable
constexpr  Zenject::SignalDeclarationAsyncInitializer::operator Zenject::IInitializable() const noexcept {
return Zenject::IInitializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SignalDeclarationAsyncInitializer::__set__tickManager(Zenject::LazyInject_1<Zenject::TickableManager> value)  {
::cordl_internals::setInstanceField<Zenject::LazyInject_1<Zenject::TickableManager>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::LazyInject_1<Zenject::TickableManager>>(value));
}
constexpr Zenject::LazyInject_1<Zenject::TickableManager> Zenject::SignalDeclarationAsyncInitializer::__get__tickManager() const {
return ::cordl_internals::getInstanceField<Zenject::LazyInject_1<Zenject::TickableManager>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SignalDeclarationAsyncInitializer::__set__declarations(System::Collections::Generic::List_1<Zenject::SignalDeclaration> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::SignalDeclaration>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::SignalDeclaration>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::SignalDeclaration> Zenject::SignalDeclarationAsyncInitializer::__get__declarations() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::SignalDeclaration>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SignalDeclarationAsyncInitializer Zenject::SignalDeclarationAsyncInitializer::New_ctor(System::Collections::Generic::List_1<Zenject::SignalDeclaration> declarations, Zenject::LazyInject_1<Zenject::TickableManager> tickManager)  {
Zenject::SignalDeclarationAsyncInitializer o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SignalDeclarationAsyncInitializer>(declarations, tickManager))};
return o;
}
 void Zenject::SignalDeclarationAsyncInitializer::_ctor(System::Collections::Generic::List_1<Zenject::SignalDeclaration> declarations, Zenject::LazyInject_1<Zenject::TickableManager> tickManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::SignalDeclaration>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::LazyInject_1<Zenject::TickableManager>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, declarations, tickManager);
}
 void Zenject::SignalDeclarationAsyncInitializer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::SignalDeclarationAsyncInitializer::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalDeclarationAsyncInitializer>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
