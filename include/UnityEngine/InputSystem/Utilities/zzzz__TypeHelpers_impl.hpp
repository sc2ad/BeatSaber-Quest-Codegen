#pragma once
namespace {
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeHelpers_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.IsInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TypeCode)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::IsInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c7044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "IsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.GetValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (*)(::System::Reflection::MemberInfo)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::GetValueType)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x28c7054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.GetNiceTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::GetNiceTypeName)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x28c71f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "GetNiceTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.GetGenericTypeArgumentFromHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (*)(::System::Type, ::System::Type, int32_t)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::GetGenericTypeArgumentFromHierarchy)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x28c7684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "GetGenericTypeArgumentFromHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
template<typename TObject>
 TObject ::UnityEngine::InputSystem::Utilities::TypeHelpers::As(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                        "As",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TObject, false>(nullptr, ___internal_method, obj);
}
 bool ::UnityEngine::InputSystem::Utilities::TypeHelpers::IsInt(::System::TypeCode type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "IsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 ::System::Type ::UnityEngine::InputSystem::Utilities::TypeHelpers::GetValueType(::System::Reflection::MemberInfo member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(nullptr, ___internal_method, member);
}
 ::StringW ::UnityEngine::InputSystem::Utilities::TypeHelpers::GetNiceTypeName(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "GetNiceTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
 ::System::Type ::UnityEngine::InputSystem::Utilities::TypeHelpers::GetGenericTypeArgumentFromHierarchy(::System::Type type, ::System::Type genericTypeDefinition, int32_t argumentIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TypeHelpers>::get(),
                            "GetGenericTypeArgumentFromHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(nullptr, ___internal_method, type, genericTypeDefinition, argumentIndex);
}
} // end anonymous namespace
