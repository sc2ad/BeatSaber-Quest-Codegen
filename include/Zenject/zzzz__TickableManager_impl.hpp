#pragma once
namespace {
#include "Zenject/zzzz__TickableManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__ILateTickable_def.hpp"
#include "Zenject/zzzz__FixedTickablesTaskUpdater_def.hpp"
#include "Zenject/zzzz__LateTickablesTaskUpdater_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IFixedTickable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__TickablesTaskUpdater_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::*)()>(&::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da19d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0._InitFixedTickables_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::_InitFixedTickables_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2da2ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            "<InitFixedTickables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2da2d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2da2dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::__set_tickable(::Zenject::IFixedTickable value)  {
::cordl_internals::setInstanceField<::Zenject::IFixedTickable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::IFixedTickable>(value));
}
constexpr ::Zenject::IFixedTickable ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::__get_tickable() const {
return ::cordl_internals::getInstanceField<::Zenject::IFixedTickable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::____Zenject__TickableManager____c__DisplayClass17_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TickableManager____c__DisplayClass17_0>())) {}
 void ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::_InitFixedTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            "<InitFixedTickables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TickableManager____c__DisplayClass17_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass17_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TickableManager____c::*)()>(&::Zenject::____Zenject__TickableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da2fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._InitFixedTickables_b__17_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::Zenject::____Zenject__TickableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c::_InitFixedTickables_b__17_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2da2fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitFixedTickables>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._InitFixedTickables_b__17_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::____Zenject__TickableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c::_InitFixedTickables_b__17_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2da3004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitFixedTickables>b__17_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._InitTickables_b__18_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::Zenject::____Zenject__TickableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c::_InitTickables_b__18_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2da301c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitTickables>b__18_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._InitTickables_b__18_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::____Zenject__TickableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c::_InitTickables_b__18_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2da3034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitTickables>b__18_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._InitLateTickables_b__19_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::Zenject::____Zenject__TickableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c::_InitLateTickables_b__19_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2da304c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitLateTickables>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c._InitLateTickables_b__19_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::____Zenject__TickableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c::_InitLateTickables_b__19_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2da3064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitLateTickables>b__19_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TickableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2da307c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TickableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2da30d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::____Zenject__TickableManager____c::__set___9(::Zenject::____Zenject__TickableManager____c value)  {
::cordl_internals::setStaticField<::Zenject::____Zenject__TickableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::Zenject::____Zenject__TickableManager____c>(value));
}
 ::Zenject::____Zenject__TickableManager____c ::Zenject::____Zenject__TickableManager____c::__get___9()  {
return ::cordl_internals::getStaticField<::Zenject::____Zenject__TickableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
 void ::Zenject::____Zenject__TickableManager____c::__set___9__17_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type> value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>>(value));
}
 ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type> ::Zenject::____Zenject__TickableManager____c::__get___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
 void ::Zenject::____Zenject__TickableManager____c::__set___9__17_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>, "<>9__17_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>>(value));
}
 ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> ::Zenject::____Zenject__TickableManager____c::__get___9__17_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>, "<>9__17_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
 void ::Zenject::____Zenject__TickableManager____c::__set___9__18_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type> value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>, "<>9__18_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>>(value));
}
 ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type> ::Zenject::____Zenject__TickableManager____c::__get___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>, "<>9__18_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
 void ::Zenject::____Zenject__TickableManager____c::__set___9__18_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>, "<>9__18_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>>(value));
}
 ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> ::Zenject::____Zenject__TickableManager____c::__get___9__18_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>, "<>9__18_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
 void ::Zenject::____Zenject__TickableManager____c::__set___9__19_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type> value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>, "<>9__19_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>>(value));
}
 ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type> ::Zenject::____Zenject__TickableManager____c::__get___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Type>, "<>9__19_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
 void ::Zenject::____Zenject__TickableManager____c::__set___9__19_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>, "<>9__19_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>>(value));
}
 ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> ::Zenject::____Zenject__TickableManager____c::__get___9__19_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t>, "<>9__19_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get>();
}
// Ctor Parameters []
 ::Zenject::____Zenject__TickableManager____c::____Zenject__TickableManager____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TickableManager____c>())) {}
 void ::Zenject::____Zenject__TickableManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Type ::Zenject::____Zenject__TickableManager____c::_InitFixedTickables_b__17_0(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitFixedTickables>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::Zenject::____Zenject__TickableManager____c::_InitFixedTickables_b__17_2(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitFixedTickables>b__17_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::System::Type ::Zenject::____Zenject__TickableManager____c::_InitTickables_b__18_0(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitTickables>b__18_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::Zenject::____Zenject__TickableManager____c::_InitTickables_b__18_2(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitTickables>b__18_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::System::Type ::Zenject::____Zenject__TickableManager____c::_InitLateTickables_b__19_0(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitLateTickables>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::Zenject::____Zenject__TickableManager____c::_InitLateTickables_b__19_2(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "<InitLateTickables>b__19_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TickableManager____c::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TickableManager____c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::*)()>(&::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da19d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0._InitTickables_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::_InitTickables_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2da3298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            "<InitTickables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2da3318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2da3374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::__set_tickable(::Zenject::ITickable value)  {
::cordl_internals::setInstanceField<::Zenject::ITickable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::ITickable>(value));
}
constexpr ::Zenject::ITickable ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::__get_tickable() const {
return ::cordl_internals::getInstanceField<::Zenject::ITickable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::____Zenject__TickableManager____c__DisplayClass18_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TickableManager____c__DisplayClass18_0>())) {}
 void ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::_InitTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            "<InitTickables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TickableManager____c__DisplayClass18_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass18_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::*)()>(&::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da19e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0._InitLateTickables_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::*)(::ModestTree::Util::ValuePair_2<::System::Type,int32_t>)>(&::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::_InitLateTickables_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2da3534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            "<InitLateTickables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2da35b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2da3610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::__set_tickable(::Zenject::ILateTickable value)  {
::cordl_internals::setInstanceField<::Zenject::ILateTickable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::ILateTickable>(value));
}
constexpr ::Zenject::ILateTickable ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::__get_tickable() const {
return ::cordl_internals::getInstanceField<::Zenject::ILateTickable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::____Zenject__TickableManager____c__DisplayClass19_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TickableManager____c__DisplayClass19_0>())) {}
 void ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::_InitLateTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            "<InitLateTickables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TickableManager____c__DisplayClass19_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TickableManager____c__DisplayClass19_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::TickableManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2da01d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.get_Tickables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable> (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::get_Tickables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "get_Tickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.get_IsPaused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::get_IsPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "get_IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.set_IsPaused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(bool)>(&::Zenject::TickableManager::set_IsPaused)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2da02a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "set_IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2da02ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.InitFixedTickables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::InitFixedTickables)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x2da0a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "InitFixedTickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.InitTickables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::InitTickables)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x2da02cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "InitTickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.InitLateTickables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::InitLateTickables)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x2da1224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "InitLateTickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ITickable, int32_t)>(&::Zenject::TickableManager::Add)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2da19e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ITickable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ITickable)>(&::Zenject::TickableManager::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da1a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ITickable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ILateTickable, int32_t)>(&::Zenject::TickableManager::AddLate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2da1a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateTickable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ILateTickable)>(&::Zenject::TickableManager::AddLate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da1ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateTickable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddFixed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::IFixedTickable, int32_t)>(&::Zenject::TickableManager::AddFixed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2da1ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFixedTickable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddFixed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::IFixedTickable)>(&::Zenject::TickableManager::AddFixed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2da1b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFixedTickable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ITickable)>(&::Zenject::TickableManager::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2da1b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ITickable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.RemoveLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ILateTickable)>(&::Zenject::TickableManager::RemoveLate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2da1be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "RemoveLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateTickable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.RemoveFixed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::IFixedTickable)>(&::Zenject::TickableManager::RemoveFixed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2da1c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "RemoveFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFixedTickable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::Update)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d9b6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d9b7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::LateUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d9b758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::TickableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2da1c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::TickableManager::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2da1cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::TickableManager::__zenFieldSetter1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2da1e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::TickableManager::__zenFieldSetter2)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2da1f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::TickableManager::__zenFieldSetter3)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2da2088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::TickableManager::__zenFieldSetter4)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2da21bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::TickableManager::__zenFieldSetter5)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2da22f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenInjectMethod0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::TickableManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2da2424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::TickableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x2da24a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::TickableManager::__set__tickables(::System::Collections::Generic::List_1<::Zenject::ITickable> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::ITickable>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::Zenject::ITickable>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable> ::Zenject::TickableManager::__get__tickables() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::ITickable>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__fixedTickables(::System::Collections::Generic::List_1<::Zenject::IFixedTickable> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::IFixedTickable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::Zenject::IFixedTickable>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable> ::Zenject::TickableManager::__get__fixedTickables() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IFixedTickable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__lateTickables(::System::Collections::Generic::List_1<::Zenject::ILateTickable> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::ILateTickable>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::Zenject::ILateTickable>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable> ::Zenject::TickableManager::__get__lateTickables() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::ILateTickable>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> ::Zenject::TickableManager::__get__priorities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__fixedPriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> ::Zenject::TickableManager::__get__fixedPriorities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__latePriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> ::Zenject::TickableManager::__get__latePriorities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__updater(::Zenject::TickablesTaskUpdater value)  {
::cordl_internals::setInstanceField<::Zenject::TickablesTaskUpdater, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::TickablesTaskUpdater>(value));
}
constexpr ::Zenject::TickablesTaskUpdater ::Zenject::TickableManager::__get__updater() const {
return ::cordl_internals::getInstanceField<::Zenject::TickablesTaskUpdater, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__fixedUpdater(::Zenject::FixedTickablesTaskUpdater value)  {
::cordl_internals::setInstanceField<::Zenject::FixedTickablesTaskUpdater, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::FixedTickablesTaskUpdater>(value));
}
constexpr ::Zenject::FixedTickablesTaskUpdater ::Zenject::TickableManager::__get__fixedUpdater() const {
return ::cordl_internals::getInstanceField<::Zenject::FixedTickablesTaskUpdater, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__lateUpdater(::Zenject::LateTickablesTaskUpdater value)  {
::cordl_internals::setInstanceField<::Zenject::LateTickablesTaskUpdater, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::LateTickablesTaskUpdater>(value));
}
constexpr ::Zenject::LateTickablesTaskUpdater ::Zenject::TickableManager::__get__lateUpdater() const {
return ::cordl_internals::getInstanceField<::Zenject::LateTickablesTaskUpdater, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TickableManager::__set__isPaused(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Zenject::TickableManager::__get__isPaused() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Zenject::TickableManager::TickableManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TickableManager>())) {}
 void ::Zenject::TickableManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable> ::Zenject::TickableManager::get_Tickables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "get_Tickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Zenject::TickableManager::get_IsPaused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "get_IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::set_IsPaused(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "set_IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Zenject::TickableManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::InitFixedTickables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "InitFixedTickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::InitTickables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "InitTickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::InitLateTickables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "InitLateTickables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::Add(::Zenject::ITickable tickable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ITickable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable, priority);
}
 void ::Zenject::TickableManager::Add(::Zenject::ITickable tickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ITickable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable);
}
 void ::Zenject::TickableManager::AddLate(::Zenject::ILateTickable tickable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateTickable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable, priority);
}
 void ::Zenject::TickableManager::AddLate(::Zenject::ILateTickable tickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateTickable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable);
}
 void ::Zenject::TickableManager::AddFixed(::Zenject::IFixedTickable tickable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFixedTickable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable, priority);
}
 void ::Zenject::TickableManager::AddFixed(::Zenject::IFixedTickable tickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "AddFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFixedTickable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable);
}
 void ::Zenject::TickableManager::Remove(::Zenject::ITickable tickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ITickable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable);
}
 void ::Zenject::TickableManager::RemoveLate(::Zenject::ILateTickable tickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "RemoveLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateTickable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable);
}
 void ::Zenject::TickableManager::RemoveFixed(::Zenject::IFixedTickable tickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "RemoveFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFixedTickable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickable);
}
 void ::Zenject::TickableManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TickableManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::TickableManager::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 void ::Zenject::TickableManager::__zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::TickableManager::__zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::TickableManager::__zenFieldSetter2(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::TickableManager::__zenFieldSetter3(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::TickableManager::__zenFieldSetter4(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::TickableManager::__zenFieldSetter5(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenFieldSetter5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::TickableManager::__zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 ::Zenject::InjectTypeInfo ::Zenject::TickableManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TickableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
