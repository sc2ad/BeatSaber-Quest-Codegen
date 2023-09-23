#pragma once
#include "System/Text/zzzz__StringBuilderCache_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: System::Text::StringBuilderCache.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (*)(int32_t)>(&System::Text::StringBuilderCache::Acquire)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26cb7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::StringBuilderCache.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder)>(&System::Text::StringBuilderCache::Release)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26cf08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::StringBuilderCache.GetStringAndRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Text::StringBuilder)>(&System::Text::StringBuilderCache::GetStringAndRelease)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26cb8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get(),
                            "GetStringAndRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Text::StringBuilderCache::__set_t_cachedInstance(System::Text::StringBuilder value)  {
::cordl_internals::setStaticField<System::Text::StringBuilder, "t_cachedInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get>(std::forward<System::Text::StringBuilder>(value));
}
 System::Text::StringBuilder System::Text::StringBuilderCache::__get_t_cachedInstance()  {
return ::cordl_internals::getStaticField<System::Text::StringBuilder, "t_cachedInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get>();
}
/// @param capacity: int32_t (default: 16)
 System::Text::StringBuilder System::Text::StringBuilderCache::Acquire(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(nullptr, ___internal_method, capacity);
}
 void System::Text::StringBuilderCache::Release(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb);
}
 ::StringW System::Text::StringBuilderCache::GetStringAndRelease(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::StringBuilderCache>::get(),
                            "GetStringAndRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sb);
}
