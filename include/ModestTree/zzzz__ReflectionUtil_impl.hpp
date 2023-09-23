#pragma once
#include "ModestTree/zzzz__ReflectionUtil_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ModestTree::ReflectionUtil.CreateArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array (*)(System::Type, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&ModestTree::ReflectionUtil::CreateArray)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2d45094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "CreateArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ModestTree::ReflectionUtil.CreateGenericList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (*)(System::Type, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&ModestTree::ReflectionUtil::CreateGenericList)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2d4539c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "CreateGenericList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ModestTree::ReflectionUtil.ToDebugString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Reflection::MethodInfo)>(&ModestTree::ReflectionUtil::ToDebugString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d457f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "ToDebugString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ModestTree::ReflectionUtil.ToDebugString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Action)>(&ModestTree::ReflectionUtil::ToDebugString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d45924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "ToDebugString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Array ModestTree::ReflectionUtil::CreateArray(System::Type elementType, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> instances)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "CreateArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Array, false>(nullptr, ___internal_method, elementType, instances);
}
 System::Collections::IList ModestTree::ReflectionUtil::CreateGenericList(System::Type elementType, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> instances)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "CreateGenericList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(nullptr, ___internal_method, elementType, instances);
}
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Reflection::MethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "ToDebugString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, method);
}
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                            "ToDebugString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action_1<TParam1> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TParam1>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1,typename TParam2>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action_2<TParam1,TParam2> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<TParam1,TParam2>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1,typename TParam2,typename TParam3>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action_3<TParam1,TParam2,TParam3> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<TParam1,TParam2,TParam3>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action_4<TParam1,TParam2,TParam3,TParam4> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<TParam1,TParam2,TParam3,TParam4>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action_5<TParam1,TParam2,TParam3,TParam4,TParam5> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_5<TParam1,TParam2,TParam3,TParam4,TParam5>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template<typename TParam1>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Func_1<TParam1> func)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TParam1>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
template<typename TParam1,typename TParam2>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Func_2<TParam1,TParam2> func)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TParam1,TParam2>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
template<typename TParam1,typename TParam2,typename TParam3>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Func_3<TParam1,TParam2,TParam3> func)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TParam1,TParam2,TParam3>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 ::StringW ModestTree::ReflectionUtil::ToDebugString(System::Func_4<TParam1,TParam2,TParam3,TParam4> func)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::ReflectionUtil>::get(),
                        "ToDebugString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TParam1,TParam2,TParam3,TParam4>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
