#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::Scripting {
struct UnityEngine__Scripting__GarbageCollector__Mode;
}
namespace UnityEngine::Scripting {
class GarbageCollector;
}
// Type: ::Mode
namespace UnityEngine::Scripting {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10254))
// CS Name: UnityEngine.Scripting.GarbageCollector::Mode
struct CORDL_TYPE UnityEngine__Scripting__GarbageCollector__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Scripting__GarbageCollector__Mode(int32_t value__) noexcept;


                    constexpr UnityEngine__Scripting__GarbageCollector__Mode(UnityEngine__Scripting__GarbageCollector__Mode const&) = default;
                    constexpr UnityEngine__Scripting__GarbageCollector__Mode(UnityEngine__Scripting__GarbageCollector__Mode&&) = default;
                    constexpr UnityEngine__Scripting__GarbageCollector__Mode& operator=(UnityEngine__Scripting__GarbageCollector__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Scripting__GarbageCollector__Mode& operator=(UnityEngine__Scripting__GarbageCollector__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Scripting__GarbageCollector__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Scripting__GarbageCollector__Mode_Unwrapped : int32_t {
__Disabled = 0,
__Enabled = 1,
__Manual = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Scripting__GarbageCollector__Mode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Scripting__GarbageCollector__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Disabled offset 0
static UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode const Disabled;

/// @brief Field Enabled offset 0
static UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode const Enabled;

/// @brief Field Manual offset 0
static UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode const Manual;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Scripting
// Type: UnityEngine.Scripting::GarbageCollector
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10255))
// CS Name: UnityEngine.Scripting.GarbageCollector
class CORDL_TYPE GarbageCollector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Mode = UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GarbageCollector() = default;

// Ctor Parameters [CppParam { name: "", ty: "GarbageCollector", modifiers: " const&", def_value: None }]
constexpr GarbageCollector(GarbageCollector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GarbageCollector", modifiers: "&&", def_value: None }]
constexpr GarbageCollector(GarbageCollector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GarbageCollector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GarbageCollector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GarbageCollector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GarbageCollector& operator=(GarbageCollector&& o) noexcept = default;
  constexpr GarbageCollector& operator=(GarbageCollector const& o) noexcept = default;
                


// Fields

static System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode> __declspec(property(get=__get_GCModeChanged, put=__set_GCModeChanged))  GCModeChanged;

static void __set_GCModeChanged(System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode> value) ;

static System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode> __get_GCModeChanged() ;


// Properties

static UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode __declspec(property(put=set_GCMode))  GCMode;


// Methods

/// @brief Method set_GCMode addr 0x2b71a34 size 0xc0 virtual false final false
static void set_GCMode(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode value) ;

/// @brief Method SetMode addr 0x2b71b1c size 0x3c virtual false final false
static void SetMode(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode mode) ;

/// @brief Method GetMode addr 0x2b71af4 size 0x28 virtual false final false
static UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode GetMode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Scripting
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode, "UnityEngine.Scripting", "GarbageCollector/Mode");
NEED_NO_BOX(UnityEngine::Scripting::GarbageCollector);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::GarbageCollector, "UnityEngine.Scripting", "GarbageCollector");
