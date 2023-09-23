#pragma once
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.add_platformUserInfoDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPlatformUserModel::*)(System::Action_1<GlobalNamespace::UserInfo>)>(&GlobalNamespace::IPlatformUserModel::add_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.remove_platformUserInfoDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPlatformUserModel::*)(System::Action_1<GlobalNamespace::UserInfo>)>(&GlobalNamespace::IPlatformUserModel::remove_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.GetUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo> (GlobalNamespace::IPlatformUserModel::*)()>(&GlobalNamespace::IPlatformUserModel::GetUserInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.GetUserFriendsUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> (GlobalNamespace::IPlatformUserModel::*)(bool)>(&GlobalNamespace::IPlatformUserModel::GetUserFriendsUserIds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.GetUserAuthToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData> (GlobalNamespace::IPlatformUserModel::*)()>(&GlobalNamespace::IPlatformUserModel::GetUserAuthToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.GetUserNamesForUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> (GlobalNamespace::IPlatformUserModel::*)(System::Collections::Generic::IReadOnlyList_1<::StringW>)>(&GlobalNamespace::IPlatformUserModel::GetUserNamesForUserIds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPlatformUserModel.RequestXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> (GlobalNamespace::IPlatformUserModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::IPlatformUserModel::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPlatformUserModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::IPlatformUserModel::add_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "add_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::UserInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IPlatformUserModel::remove_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "remove_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::UserInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo> GlobalNamespace::IPlatformUserModel::GetUserInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "GetUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GlobalNamespace::IPlatformUserModel::GetUserFriendsUserIds(bool cached)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "GetUserFriendsUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, false>(const_cast<void*>(instance), ___internal_method, cached);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData> GlobalNamespace::IPlatformUserModel::GetUserAuthToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "GetUserAuthToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GlobalNamespace::IPlatformUserModel::GetUserNamesForUserIds(System::Collections::Generic::IReadOnlyList_1<::StringW> userIds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "GetUserNamesForUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, false>(const_cast<void*>(instance), ___internal_method, userIds);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> GlobalNamespace::IPlatformUserModel::RequestXPlatformAccessToken(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPlatformUserModel>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
