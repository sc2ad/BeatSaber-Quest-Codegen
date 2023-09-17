#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSource;
}
namespace System::Diagnostics::Tracing {
struct ____System__Diagnostics__Tracing__EventSource__EventData;
}
// Type: ::EventData
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3731))
// CS Name: System.Diagnostics.Tracing.EventSource::EventData
struct CORDL_TYPE ____System__Diagnostics__Tracing__EventSource__EventData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Diagnostics__Tracing__EventSource__EventData(::cordl_internals::intptr_t _DataPointer_k__BackingField, int32_t _Size_k__BackingField, int32_t _Reserved_k__BackingField) noexcept;


                    constexpr ____System__Diagnostics__Tracing__EventSource__EventData(____System__Diagnostics__Tracing__EventSource__EventData const&) = default;
                    constexpr ____System__Diagnostics__Tracing__EventSource__EventData(____System__Diagnostics__Tracing__EventSource__EventData&&) = default;
                    constexpr ____System__Diagnostics__Tracing__EventSource__EventData& operator=(____System__Diagnostics__Tracing__EventSource__EventData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Diagnostics__Tracing__EventSource__EventData& operator=(____System__Diagnostics__Tracing__EventSource__EventData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Diagnostics__Tracing__EventSource__EventData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__DataPointer_k__BackingField, put=__set__DataPointer_k__BackingField))  _DataPointer_k__BackingField;

constexpr void __set__DataPointer_k__BackingField(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__DataPointer_k__BackingField() const;

 int32_t __declspec(property(get=__get__Size_k__BackingField, put=__set__Size_k__BackingField))  _Size_k__BackingField;

constexpr void __set__Size_k__BackingField(int32_t value) ;

constexpr int32_t __get__Size_k__BackingField() const;

 int32_t __declspec(property(get=__get__Reserved_k__BackingField, put=__set__Reserved_k__BackingField))  _Reserved_k__BackingField;

constexpr void __set__Reserved_k__BackingField(int32_t value) ;

constexpr int32_t __get__Reserved_k__BackingField() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(put=set_DataPointer))  DataPointer;

 int32_t __declspec(property(put=set_Size))  Size;

 int32_t __declspec(property(put=set_Reserved))  Reserved;


// Methods

/// @brief Method set_DataPointer addr 0x240e234 size 0x8 virtual false final false
 void set_DataPointer(::cordl_internals::intptr_t value) ;

/// @brief Method set_Size addr 0x240e23c size 0x8 virtual false final false
 void set_Size(int32_t value) ;

/// @brief Method set_Reserved addr 0x240e244 size 0x8 virtual false final false
 void set_Reserved(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
// Type: System.Diagnostics.Tracing::EventSource
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3732))
// CS Name: System.Diagnostics.Tracing.EventSource
class CORDL_TYPE EventSource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EventData = ::System::Diagnostics::Tracing::____System__Diagnostics__Tracing__EventSource__EventData;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EventSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: " const&", def_value: None }]
constexpr EventSource(EventSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "&&", def_value: None }]
constexpr EventSource(EventSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventSource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventSource& operator=(EventSource&& o) noexcept = default;
  constexpr EventSource& operator=(EventSource const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Name))  Name;


// Methods

// Ctor Parameters []
explicit EventSource() ;

/// @brief Method .ctor addr 0x240dc3c size 0x3c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "eventSourceName", ty: "::StringW", modifiers: "", def_value: None }]
explicit EventSource(::StringW eventSourceName) ;

/// @brief Method .ctor addr 0x240dc78 size 0x28 virtual false final false
 void _ctor(::StringW eventSourceName) ;

// Ctor Parameters [CppParam { name: "eventSourceGuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "eventSourceName", ty: "::StringW", modifiers: "", def_value: None }]
explicit EventSource(::System::Guid eventSourceGuid, ::StringW eventSourceName) ;

/// @brief Method .ctor addr 0x240dca0 size 0x28 virtual false final false
 void _ctor(::System::Guid eventSourceGuid, ::StringW eventSourceName) ;

/// @brief Method Finalize addr 0x240dcc8 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method set_Name addr 0x240dd68 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method IsEnabled addr 0x240dd70 size 0x8 virtual false final false
 bool IsEnabled() ;

/// @brief Method IsEnabled addr 0x240dd78 size 0x8 virtual false final false
 bool IsEnabled(::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords keywords) ;

/// @brief Method Dispose addr 0x240dd80 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x240ddec size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method WriteEvent addr 0x240ddf0 size 0x44 virtual false final false
 void WriteEvent(int32_t eventId) ;

/// @brief Method WriteEvent addr 0x240de38 size 0xbc virtual false final false
 void WriteEvent(int32_t eventId, int32_t arg1) ;

/// @brief Method WriteEvent addr 0x240def4 size 0x104 virtual false final false
 void WriteEvent(int32_t eventId, int32_t arg1, int32_t arg2) ;

/// @brief Method WriteEvent addr 0x240dff8 size 0x14c virtual false final false
 void WriteEvent(int32_t eventId, int32_t arg1, int32_t arg2, int32_t arg3) ;

/// @brief Method WriteEvent addr 0x240de34 size 0x4 virtual false final false
 void WriteEvent(int32_t eventId, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WriteEvent addr 0x240e144 size 0xec virtual false final false
 void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3) ;

/// @brief Method WriteEventCore addr 0x240e230 size 0x4 virtual false final false
 void WriteEventCore(int32_t eventId, int32_t eventDataCount, void* data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource, "System.Diagnostics.Tracing", "EventSource");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::____System__Diagnostics__Tracing__EventSource__EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
