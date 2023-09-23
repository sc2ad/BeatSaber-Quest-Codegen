#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson;
}
// Type: ::Capability
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6704))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher::MatcherJson::Capability
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability(::StringW path, ::StringW value) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MatcherJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6705))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher::MatcherJson
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Capability = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability;

// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "products", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "versions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "capabilities", ty: "::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson(::StringW interface, ::ArrayW<::StringW> interfaces, ::StringW deviceClass, ::ArrayW<::StringW> deviceClasses, ::StringW manufacturer, ::ArrayW<::StringW> manufacturers, ::StringW product, ::ArrayW<::StringW> products, ::StringW version, ::ArrayW<::StringW> versions, ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> capabilities) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_interface, put=__set_interface))  interface;

constexpr void __set_interface(::StringW value) ;

constexpr ::StringW __get_interface() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_interfaces, put=__set_interfaces))  interfaces;

constexpr void __set_interfaces(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_interfaces() const;

 ::StringW __declspec(property(get=__get_deviceClass, put=__set_deviceClass))  deviceClass;

constexpr void __set_deviceClass(::StringW value) ;

constexpr ::StringW __get_deviceClass() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_deviceClasses, put=__set_deviceClasses))  deviceClasses;

constexpr void __set_deviceClasses(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_deviceClasses() const;

 ::StringW __declspec(property(get=__get_manufacturer, put=__set_manufacturer))  manufacturer;

constexpr void __set_manufacturer(::StringW value) ;

constexpr ::StringW __get_manufacturer() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_manufacturers, put=__set_manufacturers))  manufacturers;

constexpr void __set_manufacturers(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_manufacturers() const;

 ::StringW __declspec(property(get=__get_product, put=__set_product))  product;

constexpr void __set_product(::StringW value) ;

constexpr ::StringW __get_product() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_products, put=__set_products))  products;

constexpr void __set_products(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_products() const;

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_versions, put=__set_versions))  versions;

constexpr void __set_versions(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_versions() const;

 ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> __declspec(property(get=__get_capabilities, put=__set_capabilities))  capabilities;

constexpr void __set_capabilities(::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> __get_capabilities() const;


// Methods

/// @brief Method FromMatcher addr 0x297655c size 0x334 virtual false final false
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson FromMatcher(UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) ;

/// @brief Method ToMatcher addr 0x29768f0 size 0x2fc virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher ToMatcher() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<get_patterns>d__4
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6706))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher::<get_patterns>d__4
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4(UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4(UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::InputSystem::Layouts::InputDeviceMatcher __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) ;

constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher __get___4__this() const;

 UnityEngine::InputSystem::Layouts::InputDeviceMatcher __declspec(property(get=__get___3____4__this, put=__set___3____4__this))  __3____4__this;

constexpr void __set___3____4__this(UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) ;

constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher __get___3____4__this() const;

 int32_t __declspec(property(get=__get__count_5__2, put=__set__count_5__2))  _count_5__2;

constexpr void __set__count_5__2(int32_t value) ;

constexpr int32_t __get__count_5__2() const;

 int32_t __declspec(property(get=__get__i_5__3, put=__set__i_5__3))  _i_5__3;

constexpr void __set__i_5__3(int32_t value) ;

constexpr int32_t __get__i_5__3() const;


// Properties

 System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Object___get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Object___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2976bec size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2976c20 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2976c24 size 0x15c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current addr 0x2976dd4 size 0xc virtual true final true
 System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Object___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2976de0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2976e20 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator addr 0x2976e7c size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String,System_Object___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2976f20 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6707))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher::<>c
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c(UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c(UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c& operator=(UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c value) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c __get___9() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c() ;

/// @brief Method .ctor addr 0x2976f88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <With>b__11_0 addr 0x2976f90 size 0x88 virtual false final false
 bool _With_b__11_0(char16_t ch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceMatcher
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6708))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct CORDL_TYPE InputDeviceMatcher : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c;

using _get_patterns_d__4 = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4;

using MatcherJson = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() const;

// Ctor Parameters [CppParam { name: "m_Patterns", ty: "::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
constexpr InputDeviceMatcher(::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> m_Patterns) noexcept;


                    constexpr InputDeviceMatcher(InputDeviceMatcher const&) = default;
                    constexpr InputDeviceMatcher(InputDeviceMatcher&&) = default;
                    constexpr InputDeviceMatcher& operator=(InputDeviceMatcher const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDeviceMatcher& operator=(InputDeviceMatcher&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDeviceMatcher(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_Patterns, put=__set_m_Patterns))  m_Patterns;

constexpr void __set_m_Patterns(::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> __get_m_Patterns() const;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_kInterfaceKey, put=__set_kInterfaceKey))  kInterfaceKey;

static void __set_kInterfaceKey(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_kInterfaceKey() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_kDeviceClassKey, put=__set_kDeviceClassKey))  kDeviceClassKey;

static void __set_kDeviceClassKey(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_kDeviceClassKey() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_kManufacturerKey, put=__set_kManufacturerKey))  kManufacturerKey;

static void __set_kManufacturerKey(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_kManufacturerKey() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_kProductKey, put=__set_kProductKey))  kProductKey;

static void __set_kProductKey(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_kProductKey() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_kVersionKey, put=__set_kVersionKey))  kVersionKey;

static void __set_kVersionKey(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_kVersionKey() ;


// Properties

 bool __declspec(property(get=get_empty))  empty;

 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_patterns))  patterns;


// Methods

/// @brief Method get_empty addr 0x2974890 size 0x10 virtual false final false
 bool get_empty() ;

/// @brief Method get_patterns addr 0x29748a0 size 0x6c virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> get_patterns() ;

/// @brief Method WithInterface addr 0x297490c size 0x78 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithInterface(::StringW pattern, bool supportRegex) ;

/// @brief Method WithDeviceClass addr 0x2974b94 size 0x78 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithDeviceClass(::StringW pattern, bool supportRegex) ;

/// @brief Method WithManufacturer addr 0x2974c0c size 0x78 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithManufacturer(::StringW pattern, bool supportRegex) ;

/// @brief Method WithProduct addr 0x2974c84 size 0x78 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithProduct(::StringW pattern, bool supportRegex) ;

/// @brief Method WithVersion addr 0x2974cfc size 0x78 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithVersion(::StringW pattern, bool supportRegex) ;

/// @brief Method WithCapability addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithCapability(::StringW path, TValue value) ;

/// @brief Method With addr 0x2974984 size 0x210 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher With(UnityEngine::InputSystem::Utilities::InternedString key, ::bs_hook::Il2CppWrapperType value, bool supportRegex) ;

/// @brief Method MatchPercentage addr 0x296f2a4 size 0x37c virtual false final false
 float_t MatchPercentage(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) ;

/// @brief Method MatchSingleProperty addr 0x2974d74 size 0xd8 virtual false final false
static bool MatchSingleProperty(::bs_hook::Il2CppWrapperType pattern, ::StringW value) ;

/// @brief Method GetNumPropertiesIn addr 0x2974e4c size 0xc4 virtual false final false
static int32_t GetNumPropertiesIn(UnityEngine::InputSystem::Layouts::InputDeviceDescription description) ;

/// @brief Method FromDeviceDescription addr 0x2974f10 size 0xec virtual false final false
static UnityEngine::InputSystem::Layouts::InputDeviceMatcher FromDeviceDescription(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) ;

/// @brief Method ToString addr 0x2974ffc size 0x198 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2975194 size 0x158 virtual true final true
 bool Equals(UnityEngine::InputSystem::Layouts::InputDeviceMatcher other) ;

/// @brief Method Equals addr 0x29752ec size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x29706cc size 0x1c virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, UnityEngine::InputSystem::Layouts::InputDeviceMatcher right) ;

/// @brief Method op_Inequality addr 0x2975364 size 0x74 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, UnityEngine::InputSystem::Layouts::InputDeviceMatcher right) ;

/// @brief Method GetHashCode addr 0x29753d8 size 0x18 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/<>c");
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/<get_patterns>d__4");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson/Capability");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputDeviceMatcher, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson");
